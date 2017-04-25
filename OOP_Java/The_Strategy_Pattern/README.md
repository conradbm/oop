<h2>The Strategy Pattern</h2>
<p>Design Principle #1</p>
<ul>
<li>Separate the parts of your code that vary from those that do 
not.</li>
<li>By encapsulating the code that varies, we can make changes to 
it dynamically without affecting the rest of the code that doesn't 
depend on it.</li>
</ul>

<p> Design Principle #2 </p>
<ul>
<li> Program to an interface, not an implementation. </li>
<li> Interfaces can have subclasses that are unique subtleties to 
that particular interface, for example: QuackBehavior could be an 
interface with subclasses as :Quack, Squeak, and Mute which would 
override the interface for that method if you had ever used that 
subclass.</li>
<li>You can add these interfaces as properties, these are "has a" 
relationship, like a duck "has a" fly behavior or quack behavior. 
</li>
</ul>

<p> The take-a-ways from this pattern for me are the hybrid use of both 
inheritence and polymorphism with the mixture of interfaces that will 
vary from instance to instance. An interface is a public set of actions 
that can be stand-alone or change for those who 'implements' them. </p>

<p> Another take-a-way is the concept of the abstract class. It is a 
container of sorts, it will hold things common to anyone who IS-A type 
of cookie cutter of it, as reflected in the code examples each duck will 
have a display() method and a float() method, however other behaviors 
and properties may vary, so we encapsulate those in interfaces and 
properly create them in those subclasses constructors that implement 
those interfaces. 
</p>
