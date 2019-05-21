#include <fs.h>

namespace fsbridge {

FILE *fopen(const fs::path& p, const char *mode)
{
    return ::fopen(p.string().c_str(), mode);
}

FILE *freopen(const fs::path& p, const char *mode, FILE *stream)
{
<<<<<<< HEAD
    return ::freopen(p.string().c_str(), mode, stream);
}

=======
    close();
    mode |= std::ios_base::in;
    m_file = fsbridge::fopen(p, openmodeToStr(mode).c_str());
    if (m_file == nullptr) {
        return;
    }
    m_filebuf = __gnu_cxx::stdio_filebuf<char>(m_file, mode);
    rdbuf(&m_filebuf);
    if (mode & std::ios_base::ate) {
        seekg(0, std::ios_base::end);
    }
}

void ifstream::close()
{
    if (m_file != nullptr) {
        m_filebuf.close();
        fclose(m_file);
    }
    m_file = nullptr;
}

void ofstream::open(const fs::path& p, std::ios_base::openmode mode)
{
    close();
    mode |= std::ios_base::out;
    m_file = fsbridge::fopen(p, openmodeToStr(mode).c_str());
    if (m_file == nullptr) {
        return;
    }
    m_filebuf = __gnu_cxx::stdio_filebuf<char>(m_file, mode);
    rdbuf(&m_filebuf);
    if (mode & std::ios_base::ate) {
        seekp(0, std::ios_base::end);
    }
}

void ofstream::close()
{
    if (m_file != nullptr) {
        m_filebuf.close();
        fclose(m_file);
    }
    m_file = nullptr;
}
#else // __GLIBCXX__

static_assert(sizeof(*fs::path().BOOST_FILESYSTEM_C_STR) == sizeof(wchar_t),
    "Warning: This build is using boost::filesystem ofstream and ifstream "
    "implementations which will fail to open paths containing multibyte "
    "characters. You should delete this static_assert to ignore this warning, "
    "or switch to a different C++ standard library like the Microsoft C++ "
    "Standard Library (where boost uses non-standard extensions to construct "
    "stream objects with wide filenames), or the GNU libstdc++ library (where "
    "a more complicated workaround has been implemented above).");

#endif // __GLIBCXX__
#endif // WIN32

>>>>>>> upstream/0.18
} // fsbridge
