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
class ShapeFactory {
private:
    static ShapeFactory* instance; 
    
    ShapeFactory() {}

public:
    
    static ShapeFactory* getInstance() {
        if (instance == nullptr) {
            instance = new ShapeFactory();
        }
        return instance;
    }

    Shape* getShape(const string& shapeType) {
        if (shapeType.empty()) {
            return nullptr;
        }
        if (shapeType == "RECTANGLE") {
            return new Rectangle();
        } else if (shapeType == "SQUARE") {
            return new Square();
        }
        return nullptr;
    }
};
ShapeFactory* ShapeFactory::instance = nullptr;