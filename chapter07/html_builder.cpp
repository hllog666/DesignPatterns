#include "html_builder.h"

void HtmlBuilder::MakeTitle(std::string title) {
    filename_ = title + ".html";
    ofs_.open(filename_, std::ios::out | std::ios::trunc);
    ofs_ << "<html><head><title>" << title << "</title></head><body>" << std::endl;
    ofs_ << "<h1>" << title << "</h1>" << std::endl;
}

void HtmlBuilder::MakeString(std::string str) {
    ofs_ << "<p>" << str << "</p>" << std::endl;
}

void HtmlBuilder::MakeItems(std::string items[], int len) {
    ofs_ << "<ul>" << std::endl;
    for (int i = 0; i < len; i++) {
        ofs_ << "<li>" << items[i] << "</li>" << std::endl;
    }
    ofs_ << "</ul>" << std::endl;
}

void HtmlBuilder::Close() {
    ofs_ << "</body></html>" << std::endl;
    ofs_.close();
}

std::string HtmlBuilder::GetResult() {
    return filename_;
}