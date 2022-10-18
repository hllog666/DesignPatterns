#ifndef DESIGNPATTERNS_HTML_WRITER_H
#define DESIGNPATTERNS_HTML_WRITER_H

#include <fstream>
#include <string>

/**
 * 构成系统的其他角色：完成自己的工作，并不知道Facade角色
 */
class HtmlWriter {
public:
    explicit HtmlWriter(std::string filename) {
        ofs_.open(filename, std::ios::out);
    }

    void Title(std::string title) {
        ofs_ << "<html>";
        ofs_ << "<head>";
        ofs_ << "<title>" << title << "</title>";
        ofs_ << "</head>";
        ofs_ << "<body>\n";
        ofs_ << "<h1>" << title << "</h1>\n";
    }

    void Paragraph(std::string msg) {
        ofs_ << "<p>" << msg << "</p>\n";
    }

    void Link(std::string href, std::string caption) {
        Paragraph("<a href=\"" + href + "\">" + caption + "</a>");
    }

    void Mailto(std::string mailAddr, std::string username) {
        Link("mailto:" + mailAddr, username);
    }

    void Close() {
        ofs_ << "</body>";
        ofs_ << "</html>\n";
        ofs_.close();
    }

private:
    std::ofstream ofs_;
};

#endif //DESIGNPATTERNS_HTML_WRITER_H
