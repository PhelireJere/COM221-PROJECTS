#pragma once

namespace shapes {
    class Triangle {
    private:
        double base;
        double height;
        
    public:
        Triangle();
        Triangle(double base, double height);
        
        double getBase() const;
        void setBase(double base);
        
        double getHeight() const;
        void setHeight(double height);

        ~Triangle();
    };
}
