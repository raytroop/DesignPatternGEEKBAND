/*
motivation
*/

class ISubject{
public:
    virtual void process();
};


class RealSubject: public ISubject{
public:
    virtual void process(){
        //....
    }
};

class ClientApp{

    ISubject* subject;

public:

    ClientApp(){
        subject=new RealSubject(); // 不合适， 可能由于性能的原因，安全控制的原因， 分布式的原因。。。 根本拿不到RealSubject
    }

    void DoTask(){
        //...
        subject->process();

        //....
    }
};