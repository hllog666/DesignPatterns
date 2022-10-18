#ifndef DESIGNPATTERNS_HAND_H
#define DESIGNPATTERNS_HAND_H

#include <string>

class Hand {
public:
    static Hand *GetHand(int handValue);

    bool IsStrongerThan(Hand *h) {
        return Fight(h) == 1;
    }

    bool IsWeakerThan(Hand *h) {
        return Fight(h) == -1;
    }

    std::string ToString() {
        return name_[handValue_];
    }

private:
    explicit Hand(int handValue) {
        handValue_ = handValue;
    }

    int Fight(Hand *h) {
        if (this == h) {
            return 0;
        } else if ((this->handValue_ + 1) % 3 == h->handValue_) {
            return 1;
        } else {
            return -1;
        }
    }

public:
    static const int HAND_VALUE_GUU_;
    static const int HAND_VALUE_CHO_;
    static const int HAND_VALUE_PAA_;
    static Hand *hand_[3];
private:
    static const std::string name_[3];
    int handValue_;
};

const int Hand::HAND_VALUE_GUU_ = 0;
const int Hand::HAND_VALUE_CHO_ = 1;
const int Hand::HAND_VALUE_PAA_ = 2;

Hand *Hand::hand_[3] = {
        new Hand(HAND_VALUE_GUU_),
        new Hand(HAND_VALUE_CHO_),
        new Hand(HAND_VALUE_PAA_)
};

const std::string Hand::name_[3] = {
        "石头", "剪刀", "布"
};

Hand *Hand::GetHand(int handValue) {
    return hand_[handValue];
}

#endif //DESIGNPATTERNS_HAND_H
