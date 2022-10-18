cmake_minimum_required(VERSION 3.19)
project(DesignPatterns)

set(CMAKE_CXX_STANDARD 11)

add_executable(string_array_size test/string_array_size.cpp)
add_executable(size_char_array test/size_char_array.cpp)
add_executable(string_char test/string_char.cpp)

add_executable(Iterator chapter01/iterator.h chapter01/aggregate.h chapter01/main.cpp chapter01/book.h chapter01/book.cpp chapter01/book_shelf.h chapter01/book_shelf.cpp chapter01/book_shelf_iterator.h chapter01/book_shelf_iterator.cpp)

add_executable(Adapter_inherit chapter02/inherit/main.cpp chapter02/inherit/banner.h chapter02/inherit/banner.cpp chapter02/inherit/print.h chapter02/inherit/print_banner.h chapter02/inherit/print_banner.cpp)
add_executable(Adapter_delegation chapter02/delegation/main.cpp chapter02/delegation/banner.h chapter02/delegation/banner.cpp chapter02/delegation/print.h chapter02/delegation/print_banner.h chapter02/delegation/print_banner.cpp)

add_executable(TemplateMethod chapter03/main.cpp chapter03/abstract_display.h chapter03/char_display.h chapter03/char_display.cpp chapter03/string_display.h chapter03/string_display.cpp)

add_executable(FactoryMethod chapter04/main.cpp chapter04/factory.h chapter04/product.h chapter04/id_card.h chapter04/id_card.cpp chapter04/id_card_factory.h chapter04/id_card_factory.cpp)

add_executable(Singleton chapter05/main.cpp chapter05/singleton.h)

add_executable(Prototype chapter06/main.cpp chapter06/manager.h chapter06/manager.cpp chapter06/product.h chapter06/message_box.h chapter06/message_box.cpp chapter06/underline_pen.h chapter06/underline_pen.cpp)

add_executable(Builder chapter07/main.cpp chapter07/builder.h chapter07/director.h chapter07/director.cpp chapter07/html_builder.h chapter07/html_builder.cpp chapter07/text_builder.h chapter07/text_builder.cpp)

add_executable(AbstractFactory chapter08/main.cpp chapter08/factory.h chapter08/item.h chapter08/link.h chapter08/tray.h chapter08/page.h chapter08/list_link.h chapter08/list_tray.h chapter08/list_page.h chapter08/table_link.h chapter08/table_tray.h chapter08/table_page.h chapter08/list_factory.h chapter08/table_factory.h)

add_executable(Bridge chapter09/main.cpp chapter09/display.h chapter09/count_display.h chapter09/display_impl.h chapter09/string_display_impl.h)

add_executable(Strategy chapter10/main.cpp chapter10/hand.h chapter10/strategy.h chapter10/winning_strategy.h chapter10/prob_strategy.h chapter10/player.h)

add_executable(Composite chapter11/main.cpp chapter11/entry.h chapter11/file.h chapter11/directory.h)

add_executable(Decorator chapter12/main.cpp chapter12/display.h chapter12/border.h chapter12/side_border.h chapter12/string_display.h chapter12/full_border.h)

add_executable(Visitor chapter13/main.cpp chapter13/element.h chapter13/entry.h chapter13/directory.h chapter13/file.h chapter13/visitor.h chapter13/list_visitor.h)

add_executable(ChainOfResponsibility chapter14/main.cpp chapter14/trouble.h chapter14/support.h chapter14/no_support.h chapter14/limit_support.h chapter14/odd_support.h chapter14/support.h)

add_executable(Facade chapter15/main.cpp chapter15/util.h)

add_executable(Observer chapter17/main.cpp chapter17/observer.h chapter17/number_generator.h chapter17/digit_observer.h chapter17/graph_observer.h chapter17/random_number_generator.h)

add_executable(Memento chapter18/main.cpp chapter18/gamer.h chapter18/memento.h)

add_executable(Flyweight chapter20/main.cpp chapter20/big_char.h chapter20/big_char_factory.h chapter20/big_string.h)

add_executable(Proxy chapter21/main.cpp chapter21/printable.h chapter21/printer.h chapter21/printer_proxy.h)

add_executable(Interpreter chapter23/main.cpp chapter23/node.h chapter23/context.h chapter23/string_tokenizer.h chapter23/command_list_node.h chapter23/command_node.h chapter23/primitive_command_node.h chapter23/program_node.h chapter23/repeat_command_node.h chapter23/command_list_node.cpp chapter23/command_node.cpp chapter23/primitive_command_node.cpp chapter23/repeat_command_node.cpp)