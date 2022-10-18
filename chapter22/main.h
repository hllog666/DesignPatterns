#ifndef DESIGNPATTERNS_MAIN_H
#define DESIGNPATTERNS_MAIN_H

#include <string>
#include "macro_command.h"
#include "draw_canvas.h"

class Main : public JFrame, public ActionListener, public MouseMotionLister, public WindowListener {
public:
    Main(std::string title) {
        AddWindowListener(this);
        canvas_->AddMouseMotionListener(this);
        clearButton_->AddActionListener(this);
        Box *buttonBox = new Box(BoxLayout::X_AXIS);
        buttonBox->Add(clearButton_);
        Box *mainBox = new Box(BoxLayout::Y_AXIS);
        mainBox->Add(buttonBox);
        mainBox->add(canvas_);
        GetContentPane()->Add(mainBox);
        Pack();
        Show();
    }

    void ActionPerformed(ActionEvent *e) {
        if (e->GetSource() == clearButton_) {
            history_->Clear();
            canvas_->Repaint();
        }
    }

    void MouseMoved(MouseEvent *e) {

    }

    void MouseDragged(MouseEvent *e) {
        Command *cmd = new DrawCommand(canvas, e->GetPoint());
        history_->Append(cmd);
        cmd->Execute();
    }

    void WindowClosing(WindowEvent *e) {
        exit(0);
    }

    void WindowActivated(WindowEvent *e) {}

    void WindowClosed(WindowEvent *event) {}

    void WindowDeactivated(WindowEvent *event) {}

    void WindowDeiconified(WindowEvent *event) {}

    void WindowIconified(WindowEvent *event) {}

    void WindowOpened(WindowEvent *event) {}

private:
    MacroCommand *history_ = new MacroCommand();
    DrawCanvas *canvas_ = new DrawCanvas(400, 400, history_);
    JButton *clearButton_ = new JButton("clear");
};


#endif //DESIGNPATTERNS_MAIN_H
