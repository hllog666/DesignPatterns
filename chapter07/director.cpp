#include "director.h"

Director::Director(Builder *builder) {
    builder_ = builder;
}

void Director::Construct() {
    builder_->MakeTitle("Greeting");
    builder_->MakeString("从早上至下午");
    builder_->MakeItems(new std::string[2]{"早上好", "下午好"}, 2);
    builder_->MakeString("晚上");
    builder_->MakeItems(new std::string[3]{"晚上好", "晚安", "再见"}, 3);
    builder_->Close();
}