#include "observer.h"
#include "number_generator.h"
#include "random_number_generator.h"
#include "digit_observer.h"
#include "graph_observer.h"

int main() {
    NumberGenerator *generator = new RandomNumberGenerator();
    Observer *observer1 = new DigitObserver();
    Observer *observer2 = new GraphObserver();
    generator->AddObserver(observer1);
    generator->AddObserver(observer2);
    generator->Execute();
    return 0;
}