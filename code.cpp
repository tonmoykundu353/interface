class Shape {
public:
    virtual void draw() = 0;
    virtual ~Shape() 
};
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Inside Rectangle::draw() method." << endl;
    }
};
class Square : public Shape {
public:
    void draw() override {
        cout << "Inside Square::draw() method." << endl;
    }
};
