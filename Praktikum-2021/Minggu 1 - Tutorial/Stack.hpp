// stack.h
#ifndef STACK_H
#define STACK_H

class Stack {
private:
    int size;
    const int capacity;
    int* data;
    static int n_stack;
public:
    Stack();                // default constructor
    Stack(int cap);         // user defined constructor
    Stack(const Stack& s);  // copy constructor
    ~Stack();               // destructor

    void push(int x);       // menambahkan isi stack
    void push(int x, int n); // memasukkan x sebanyak n kali ke stack
    int pop();              // mengambil dan menghapus top dari stack
    int top() const;        // melihat elemen teratas stack
    int getCapacity();
    static int getNumOfStack();
    void ubah();

    friend int compareStackSize(const Stack& s1, const Stack& s2);

    Stack operator+(const Stack& s);
    // atau
    friend Stack operator+(const Stack& s1, const Stack& s2);

    // Latihan: coba jika fungsinya seperti berikut
    // ->  Stack& operator+(const Stack& s)
    // ->  friend Stack& operator+(const Stack& s1, const Stack& s2)
};

#endif