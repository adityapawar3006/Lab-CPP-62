#include<iostream>
class Rectangle{
    private:
    double length;
    double width;

    public:
    Rectangle():length(1.0),width(1.0){}

    Rectangle(double len,double wid) : length(len),width(wid){}

    ~Rectangle(){
        std::cout<<"Rectangle object destroyed."<<std::endl;
    }

    double getLength() const{
        return length;
    }
    double getWidth() const{
        return width;
    }
    void setLength(double len){
        length = len;
    }
    void setWidth(double wid){
        width = wid;
    }
    double calculateArea() const{
        return length * width;
    }
    double calculatePerimeter() const{
        return 2 * (length + width);
    }
};

int main(){
    Rectangle rect(4.0,40.0);

    std::cout<<"Rectangle Properties:"<<std::endl;
    std::cout<<"Length: "<<rect.getLength()<<std::endl;
    std::cout<<"Width: "<<rect.getWidth()<<std::endl;
    std::cout<<"Area: "<<rect.calculateArea()<<std::endl;
    std::cout<<"Perimeter: "<<rect.calculatePerimeter()<<std::endl;
    return 0;
}