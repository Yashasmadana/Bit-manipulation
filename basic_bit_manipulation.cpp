void setBit(int value,int position) {
       return  value | (1 << position);
    }

    // Get the value of a specific bit at the given position
    bool getBit(int value,int position)  {
        return (value & (1 << position)) != 0;
    }

    // Clear a specific bit at the given position
    void clearBit(int position) {
        value & ~(1 << position);
    }

    // Update a specific bit at the given position with a new value
    void updateBit(int position, bool newValue) {
        if (newValue) {
            setBit(position);
        } else {
            clearBit(position);
        }
    }
