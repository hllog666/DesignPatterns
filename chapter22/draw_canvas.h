#ifndef DESIGNPATTERNS_DRAW_CANVAS_H
#define DESIGNPATTERNS_DRAW_CANVAS_H

#include "drawable.h"
#include "macro_command.h"
#include "color.h"

class DrawCanvas : public Canvas, public Drawable {
public:
    DrawCanvas(int width, int height, MacroCommand *history) {
        SetSize(width, height);
        SetBackground(WHITE_);
        history_ = history;
    }

    void Paint(Graphics *g) {
        history_->Execute();
    }

    void Draw(int x, int y) override {
        Graphics *g = GetGraphics();
        g->SetColor(color_);
        g->FillOval(x - radius, y - radius, radius * 2, radius * 2);
    }

private:
    Color color_ = RED_;
    MacroCommand *history_;
};

#endif //DESIGNPATTERNS_DRAW_CANVAS_H
