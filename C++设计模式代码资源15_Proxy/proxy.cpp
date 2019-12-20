class ISubject{
public:
    virtual void process();
};


//Proxy的设计
class SubjectProxy: public ISubject{


public:
    virtual void process(){
        //对RealSubject的一种间接访问
        //....
    }
};

class ClientApp{

    ISubject* subject;

public:

    ClientApp(){
        subject=new SubjectProxy(); // 针对RealSubject的代理
    }

    void DoTask(){
        //...
        subject->process();

        //....
    }
};