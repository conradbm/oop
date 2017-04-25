class Interface
{
public:
    Interface(){}
    virtual ~Interface(){}
    virtual void method1()=0;    // "=0" part makes this method pure 
virtual, and
                                 // also makes this class abstract.
    virtual void method2()=0;
};

class Concrete : public Interface
{
private:
    int myMember;

public:
    Concrete(){}
    ~Concrete(){}
    void method1();
    void method2();
};

// Provide implementation for the first method
void Concrete::method1()
{
    // Your implementation
}

// Provide implementation for the second method
void Concrete::method2()
{
    // Your implementation
}

int main(void)
{
    Interface *f = new Concrete();

    f->method1();
    f->method2();

    delete f;

    return 0;
}
