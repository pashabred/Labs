#include<iostream>
#include<string>
#include<math.h>

using namespace std;
class Vector{
  private:
        float x;
        float y;
  public:
    Vector(float X,float Y,float Z){
      x=X;
      y=Y;
    }
  friend ostream& operator<< (ostream &out, const Vector &a);   friend istream& operator>>(istream& cin, Vector &vector);
  friend bool  operator>(Vector& lef,Vector& rig);
  friend bool  operator<(Vector& lef,Vector& rig);
  friend bool  operator==(Vector& lef,Vector& rig);
  Vector& operator=(const Vector& right) {
    this->x=right.x;
    this->y=right.y;
    return *this;
  }
  friend bool  operator>(Vector& lef,Vector& rig);
  friend bool  operator<(Vector& lef,Vector& rig);
  friend bool  operator==(Vector& lef,Vector& rig);
};

ostream& operator<< (ostream &out, const Vector &a) {
    out << a.x << " " << a.y;
    return out;}

istream& operator>>(istream& cin, Vector &a) {
  cin >>a.x >> a.y;
  return cin;
}

bool operator>(Vector& lef,Vector& rig) {
  return pow(lef.x*lef.x+lef.y*lef.y,0.5)>pow(rig.x*rig.x+rig.y*rig.y,0.5);
}
bool operator<(Vector& lef,Vector& rig) {
  return pow(lef.x*lef.x+lef.y*lef.y,0.5)<pow(rig.x*rig.x+rig.y*rig.y,0.5);
}
bool operator==(Vector& lef,Vector& rig) {
  return pow(lef.x*lef.x+lef.y*lef.y,0.5)==pow(rig.x*rig.x+rig.y*rig.y,0.5);
}


int main(int argc, char const *argv[]) {

  return 0;
}
