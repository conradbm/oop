Virtual Function
A virtual function is a function in a base class that is declared using 
the keyword virtual. Defining in a base class a virtual function, with 
another version in a derived class, signals to the compiler that we 
don't want static linkage for this function.

What we do want is the selection of the function to be called at any 
given point in the program to be based on the kind of object for which 
it is called. This sort of operation is referred to as dynamic linkage, 
or late binding.

Pure Virtual Functions
It's possible that you'd want to include a virtual function in a base 
class so that it may be redefined in a derived class to suit the objects 
of that class, but that there is no meaningful definition you could give 
for the function in the base class.

We can change the virtual function area() in the base class to the 
following:


class Shape {
   protected:
      int width, height;
   public:
      Shape( int a = 0, int b = 0) {
         width = a;
         height = b;
      }
		
      // pure virtual function
      virtual int area() = 0;
};
