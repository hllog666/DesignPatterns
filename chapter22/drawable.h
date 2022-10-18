#ifndef DESIGNPATTERNS_DRAWABLE_H
#define DESIGNPATTERNS_DRAWABLE_H

class Drawable {
public:
    virtual void Draw(int x, int y) = 0;
};

#endif //DESIGNPATTERNS_DRAWABLE_H
