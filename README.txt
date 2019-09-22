## C++ Lab 1
### Arthur ROUILLE & Bastien HUBERT

##Warmup

Line 6 : We initialize r as a reference to x.
Line 7 : r equals 3.0 and, being a reference to x, we also have x = 3.0
Line 8 : y equals 5.0, but r is bound only to the value of y, so r remains equal to 3.0


##References and function return

The compiler throws the following errors :

$src/shop.cpp:186:24: error: cannot bind non-const lvalue reference of type ‘Item&’ to an rvalue of type ‘Item’
$     swapPrices(readItem(),readItem());
$                ~~~~~~~~^~
$src/shop.cpp:103:6: note:   initializing argument 1 of ‘void swapPrices(Item&, Item&)’
$ void swapPrices(Item &i1, Item &i2) {

As the compiler tells us, we can't use a reference returned by a function if this reference is not constant, since the returned reference is a local object by default.


##Further work

###Logical gate

The keyword 'static' allows only one use of the object in memory. Thus, we can use this object both in a local and a global context : only the concerned memory will be affected by the changes made on the object.

We couldn't overcome the following message :

$src/shop.cpp:195:27: error: cannot bind non-const lvalue reference of type ‘bool&’ to an rvalue of type ‘bool’
$ if (logical_gate(true,true)) { cout << "OK" << endl; }

Moreover, we didn't succeded in defining properly the function logical_gate() with the equal signs.


###Overload and namespaces

The compiler throws the following error :

$src/bonusQuestion.cpp:38:18: error: invalid initialization of reference of type ‘double&’ from expression of type ‘double*’
$  applyVAT( price );

We have two functions named 'applyVAT'. the first one is defined outside of the namespace. The second one is defined in the namespace MyLib. The problem is the first one takes a pointer on a double, and the one in the namespace a reference on a double.
When we're defining 'foo' in the namespace, it tries to use the function previously defined in the namespace. Since 'applyVAT' defined in the namespace takes a reference and not a pointer, the compiler disagree with our use of 'applyVAT'.

Adding the line 'using ::applyVAT;' allows the compiler to overload the method 'applyVAT' defined in the namespace and use the one first defined outside the namespace instead.
