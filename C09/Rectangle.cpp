// Accessors & mutators

class Rectangle {
    int wide, high;
public:
    Rectangle(int w = 0, int h = 0): wide(w), high(h) {}
    int width() const { return wide; } // Read
    void width(int w) { wide = w; } // Set
    int height() const { return high; }
    void height(int h) { high = h; }
};

int main(){
    Rectangle r(19, 47);
    r.height(2 * r.width());
    r.width(2 * r.height());
} ///:~