#include <string>
#include<iostream>
using namespace std;

class NhanVat{
private:
    int _hp;
    string _name;

public:
    NhanVat() : _hp(100), _name("Phat Cute") {}
    void nhanSatThuong(int damage) {
        _hp -= damage;
    }

    void tanCong(NhanVat& mucTieu) const {
        mucTieu.nhanSatThuong(10);
    }

    int get_hp() {return _hp;}
};

class ChienBinh : public NhanVat {
public:
    void tanCongLienHoan() const;
};

class PhuThuy: public NhanVat{
public:
    void phunLua() const;
    void phunNuoc() const;
private:
    int _mana;
};

int main() {
    NhanVat a;
    ChienBinh b;
    a.tanCong(b);
    cout << b.get_hp() << endl;
}
