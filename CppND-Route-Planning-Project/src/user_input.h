# pragma once
# include <string>

class UserInput{
    private:
        float start_x;
        float start_y;
        float end_x;
        float end_y; 
        float acceptInput(std::string position);

    public:
        UserInput();

        void setStartX(float val);
        void setStartY(float val);
        void setEndX(float val);
        void setEndY(float val);

        float getStartX();
        float getStartY();
        float getEndX();
        float getEndY();

        void getUserInput();

        

};