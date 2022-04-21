class Circle
    {
        private:
        double radius;
        public:
        Circle (double radius)
        {
            this->radius = radius;
        }
        double getArea()
        {
            return 3.14*radius*radius;
        }
        double getCircumference()
        {
            return 2*radius*3.14;
        }
    };