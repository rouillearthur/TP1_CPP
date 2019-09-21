Ligne 6 : On initialise r comme référence à x.
Ligne 7 : r vaut 3.0 et étant une référence à x, on a aussi x=3.0
Ligne 8 : t vaut 5.0

error: call of overloaded ‘readPositiveFloat(double&)’ is ambiguous
     readPositiveFloat(inputPrice);
                                 ^
src/shop.cpp:33:6: note: candidate: void readPositiveFloat(double)
 void readPositiveFloat(double inputPrice) {
      ^~~~~~~~~~~~~~~~~
src/shop.cpp:45:6: note: candidate: void readPositiveFloat(double&)
 void readPositiveFloat(double & inputPrice) {
      ^~~~~~~~~~~~~~~~~


The compiler throws the following errors :
"
src/shop.cpp:186:24: error: cannot bind non-const lvalue reference of type ‘Item&’ to an rvalue of type ‘Item’
     swapPrices(readItem(),readItem());
                ~~~~~~~~^~
src/shop.cpp:103:6: note:   initializing argument 1 of ‘void swapPrices(Item&, Item&)’
 void swapPrices(Item &i1, Item &i2) {
"


As the compiler tells us, we can't use a reference returned by a function if this reference is not constant, since the returned reference is a local object by default.

