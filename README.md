## C++ Static Field
A field which is declared as static is called static field. Unlike instance field which gets memory each time whenever you create object, there is only one copy of static field created in the memory. It is shared to all the objects

**--> Advantages:**

- Memory efficient: Now we don't need to create instance for accessing the static members, so it saves memory. Moreover, it belongs to the type, so it will not get memory each time when instance is created.

## What is static variable in CPP?
A static variable is a variable that is declared using the keyword static. The space for the static variable is allocated only one time and this is used for the entirety of the program. Once this variable is declared, it exists till the program executes.

## What is OOPS?
Object-Oriented Programming is a methodology or paradigm to design a program using classes and objects.

## What is object?
Any entity that has state and behavior is known as an object. For example: chair, pen, table, keyboard, bike etc. It can be physical and logical.

## What is class?
A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.

## What is inheritance?
When one object acquires all the properties and behaviours of parent object i.e. known as inheritance. It provides code reusability. It is used to achieve runtime polymorphism.

## What is polymorphism?
When one task is performed by different ways i.e. known as polymorphism. For example: to convince the customer differently, to draw something e.g. shape or rectangle etc.

## Types of polymorphism in c++?
There are the two types of polymorphism in C++ :

**1. Compile Time Polymorphism**

Compile-time polymorphism is done by overloading an operator or function. It is also known as "static" or "early binding".

**--> Why is it called compile-time polymorphism?**

Overloaded functions are called by comparing the data types and number of parameters. This type of information is available to the compiler at the compile time. Thus, the suitable function to be called will be chosen by the C++ compiler at compilation time.

There are two types of compile-time polymorphism in c++ i,e, function overloading and operator overloading.

**2. Runtime Polymorphism**

Runtime polymorphism occurs when functions are resolved at runtime rather than compile time when a call to an overridden method is resolved dynamically at runtime rather than compile time. It's also known as late binding or dynamic binding.

Runtime polymorphism is achieved using a combination of function overriding and virtual functions.

## What is abstraction?
Hiding internal details and showing functionality is known as abstraction. Data abstraction is the process of exposing to the outside world only the information that is absolutely necessary while concealing implementation or background information.For example: phone call, we don't know the internal processing.

## What is encapsulation?
Binding (or wrapping) code and data together into a single unit is known as encapsulation. For example: capsule, it is wrapped with different medicines.

## What is constructor?
constructor is a special method which is invoked automatically at the time of object creation. It is used to initialize the data members of new object generally. The constructor in C++ has the same name as class or structure.

## Types of constructors?
**1. Default Constructor**

A constructor with no arguments (or parameters) in the definition is a default constructor. It is the type of constructor in C++ usually used to initialize data members (variables) with real values. 

**2. Parameterized Constructor**

Unlike the Default constructor, It contains parameters (or arguments) in the constructor definition and declaration. More than one argument can also pass through a parameterized constructor.

**3. Copy Constructor**

A copy constructor is the third type among various types of constructors in C++. The member function initializes an object using another object of the same class. It helps to copy data from one object to another.

## What is destructor?
A destructor is a member function that is invoked automatically when the object goes out of scope or is explicitly destroyed by a call to delete . A destructor has the same name as the class, preceded by a tilde ( ~ ).

## What is function overloading?
Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters.

## What is function overriding?
Function overriding in C++ is a feature that allows us to use a function in the child class that is already present in its parent class. The child class inherits all the data members, and the member functions present in the parent class.

## What is operator overloading?
Operator overloading is used to overload or redefines most of the operators available in C++. It is used to perform the operation on the user-defined data type. 

**--> Rules for Operator Overloading**
1. Existing operators can only be overloaded, but the new operators cannot be overloaded.
2. The overloaded operator contains atleast one operand of the user-defined data type.
3. We cannot use friend function to overload certain operators. However, the member function can be used to overload those operators.
4. When unary operators are overloaded through a member function take no explicit arguments, but, if they are overloaded by a friend function, takes one argument.

When binary operators are overloaded through a member function takes one explicit argument, and if they are overloaded through a friend function takes two explicit arguments

**--> Operator that cannot be overloaded are as follows:**

1. Scope operator (::)
2. Sizeof
3. member selector(.)
4. member pointer selector(*)
5. ternary operator(?:)

## What is this keyword?
this keyword in C++ is an implicit pointer that points to the object of the class of which the member function is called. Every object has its own this pointer. Every object can reference itself by this pointer.

# What is virtual function?
A virtual function in C++ is a base class member function that you can redefine in a derived class to achieve polymorphism. You can declare the function in the base class using the virtual keyword.

## What is pure virtual function?
A pure virtual function in c++ is a virtual function for which we do not have an implementation. We do not write any functionality in it. Instead, we only declare this function. For example,

```
class Shape { 
    public: 
    // creating a pure virtual function virtual 
    void calculateArea() = 0; 
};
```

Note: The = 0 syntax doesn't mean we are assigning 0 to the function.

## What is virtual base class write an example?
The virtual base class is a concept used in multiple inheritances to prevent ambiguity between multiple instances. For example: suppose we created a class “A” and two classes “B” and “C”, are being derived from class “A”. But once we create a class “D” which is being derived from class “B” and “C”.

## What is virtual destructor?
Deleting a derived class object using a pointer of base class type that has a non-virtual destructor results in undefined behavior. To correct this situation, the base class should be defined with a virtual destructor.

Making base class destructor virtual guarantees that the object of derived class is destructed properly, i.e., both base class and derived class destructors are called. 

## What is an abstract class in C++?
An abstract class is a class that is designed to be specifically used as a base class. An abstract class contains at least one pure virtual function. You declare a pure virtual function by using a pure specifier ( = 0 ) in the declaration of a virtual member function in the class declaration.

## What is inline function in c++?
The main use of the inline function in C++ is to save memory space. Whenever the function is called, then it takes a lot of time to execute the tasks, such as moving to the calling function. 

If the length of the function is small, then the substantial amount of execution time is spent in such overheads, and sometimes time taken required for moving to the calling function will be greater than the time taken required to execute that function.

We cannot provide the inlining to the functions in the following circumstances:

1. If a function is recursive.
2. If a function contains a loop like for, while, do-while loop.
3. If a function contains static variables.
4. If a function contains a switch or go to statement

## Why we use scope resolution operator in c++?
The scope resolution operator ( :: ) is used for several reasons. For example: If the global variable name is same as local variable name, the scope resolution operator will be used to call the global variable. It is also used to define a function outside the class and used to access the static variables of class.

## What is friend function?
If a function is defined as a friend function of a class, then the protected and private data of that class can be accessed using the function.

## What is characteristics of a friend function?
1. The function is not in the scope of the class to which it has been declared as a friend.
2. It cannot be called using the object as it is not in the scope of that class.
3. It can be invoked like a normal function without using the object.
4. It cannot access the member names directly and has to use an object name and dot membership operator with the member name.
5. It can be declared either in the private or the public part.

## Why we use new keyword in cpp?
new operator is used to dynamically allocate memory blocks in the heap segment of the memory in C++. The compiler allocates this memory during the time the program executes.

## What is access modifiers?
The access modifiers of C++ allows us to determine which class members are accessible to other classes and functions, and which are not.

**1. public Access Modifier**

The public keyword is used to create public members (data and functions).
The public members are accessible from any part of the program.

**2. private Access Modifier**

The private keyword is used to create private members (data and functions).
The private members can only be accessed from within the class.
However, friend classes and friend functions can access private members.

**3. protected Access Modifier**

The protected keyword is used to create protected members (data and function).
The protected members can be accessed within the class and from the derived class.

## What is Composition?
Composition is a relationship between two classes where one class is composed of one or more instances of the other class. 

The composed class is typically an essential part of the composite class, and if the composite class is destroyed, the composed class will also be destroyed. 

For example, a House class might be composed of a Room class, where the Room class cannot exist without the House class.

## What is Aggregation?
Aggregation is a relationship between two classes in which one class, known as the aggregate class, contains a pointer or reference to an object of another class, known as the component class. 

The component class can exist independently of the aggregate class, and it can be shared by multiple aggregate classes.

For example, a University class might have an aggregation relationship with a Student class, where the Student class can exist independently of the University class.

## What is Data Abstraction?
Data Abstraction is a process of providing only the essential details to the outside world and hiding the internal details, i.e., representing only the essential details in the program.

Data Abstraction is a programming technique that depends on the seperation of the interface and implementation details of the program.

Let's take a real life example of AC, which can be turned ON or OFF, change the temperature, change the mode, and other external components such as fan, swing. But, we don't know the internal details of the AC, i.e., how it works internally. Thus, we can say that AC seperates the implementation details from the external interface.

**--> Data Abstraction can be achieved in two ways:**

1. Abstraction using classes
2. Abstraction in header files.

**----> Abstraction using classes:**

 An abstraction can be achieved using classes. A class is used to group all the data members and member functions into a single unit by using the access specifiers. A class has the responsibility to determine which data member is to be visible outside and which is not.

**----> Abstraction in header files:**

 An another type of abstraction is header file. For example, pow() function available is used to calculate the power of a number without actually knowing which algorithm function uses to calculate the power. Thus, we can say that header files hides all the implementation details from the user.

**--> Advantages Of Abstraction:**
1. Implementation details of the class are protected from the inadvertent user level errors.
2. A programmer does not need to write the low level code.
3. Data Abstraction avoids the code duplication, i.e., programmer does not have to undergo the same tasks every time to perform the similar operation.
4. The main aim of the data abstraction is to reuse the code and the proper partitioning of the code across the classes.
5. Internal implementation can be changed without affecting the user level code.

## What is Namespace?
Namespace provide the space where we can define or declare identifier i.e. variable, method, classes.

## What is fstream?
In C++ programming we are using the iostream standard library, it provides cin and cout methods for reading from input and writing to output respectively.

To read and write from a file we are using the standard C++ library called fstream.

There are three classes included in the fstream library, which are used to create, write or read files:

1. ofstream --> Creates and writes to files.
2. ifstream --> Reads from files.
3. fstream --> A combination of ofstream and ifstream: creates, reads, and writes to files.

## What is difference between ios::app and ios::ate?
ios::ate "sets the stream's position indicator to the end of the stream on opening."

ios::app "set the stream's position indicator to the end of the stream before each output operation."

This means the difference is that ios::ate puts your position to the end of the file when you open it. ios::app instead puts it at the end of the file every time you flush your stream. 

If, for example, you have two programs that write to the same log file, ios::ate will override anything that was added to the file by the other program since your program opened it. ios:app will instead jump to the end of file each time your program adds a log entry.

## What is random file access functions?
Random file access is done by manipulating the file pointer using either seekg() function (for input) and seekp() function (for output). In case you are wondering, the g stands for “get” and the p for “put”. For some types of streams, seekg() (changing the read position) and seekp() (changing the write position) operate independently.

## What is Formatted I/O in C++?
C++ helps us to format the I/O operations like determining the number of digits to be displayed after the decimal point, specifying number base etc.

There are two ways to do so:
1. Using the ios class or various ios member functions.
2. Using manipulators(special functions).

Few standard ios class functions are:

- **width():** The width method is used to set the required field width. The output will be displayed in the given width

- **precision():** The precision method is used to set the number of the decimal point to a float value

- **fill():** The fill method is used to set a character to fill in the blank space of a field

- **setf():** The setf method is used to set various flags for formatting output

- **unsetf():** The unsetf method is used To remove the flag setting

## What are Manipulators?
Manipulators are helping functions that can modify the input/output stream. It does not mean that we change the value of a variable, it only modifies the I/O stream using insertion (<<) and extraction (>>) operators.

There are two types of manipulators used generally:
1. Parameterized     
2. Non-parameterized

## What is Exception Handling?
Exception Handling in C++ is a process to handle runtime errors. We perform exception handling so the normal flow of the application can be maintained even after runtime errors.

In C++, exception is an event or object which is thrown at runtime. All exceptions are derived from std::exception class. It is a runtime error which can be handled. If we don't handle the exception, it prints exception message and terminates the program.