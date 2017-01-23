#pragma once

class Die {
    private:
        unsigned int roll_die();
    public:
        Die();
        ~Die();

        void roll_die(int &die1, int &die2);
        void roll_die(int *die1, int *die2);
};
