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
