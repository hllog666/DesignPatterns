#ifndef DESIGNPATTERNS_STRING_TOKENIZER_H
#define DESIGNPATTERNS_STRING_TOKENIZER_H

#include <string>
#include <vector>

class StringTokenizer {
public:
    explicit StringTokenizer(std::string text) {
        text_ = text;
        count_ = 0;
        StringSplit(text_, " ", res_);
    }

    bool HasMoreTokens() {
        return count_ != res_.size();
    }

    std::string NextToken() {
        return res_[count_++];
    }

    // 使用字符串分割
    static void StringSplit(const std::string &str, const std::string &splits, std::vector<std::string> &res) {
        if (str.empty()) return;
        //在字符串末尾也加入分隔符，方便截取最后一段
        std::string strs = str + splits;
        size_t pos = strs.find(splits);
        int step = splits.size();

        // 若找不到内容则字符串搜索函数返回 npos
        while (pos != std::string::npos) {
            std::string temp = strs.substr(0, pos);
            res.push_back(temp);
            //去掉已分割的字符串,在剩下的字符串中进行分割
            strs = strs.substr(pos + step, strs.size());
            pos = strs.find(splits);
        }
    }

private:
    std::string text_;
    std::vector<std::string> res_;
    int count_;
};

#endif //DESIGNPATTERNS_STRING_TOKENIZER_H
