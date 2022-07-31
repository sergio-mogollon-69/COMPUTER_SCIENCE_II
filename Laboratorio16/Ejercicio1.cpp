#include <iostream>
#include <string>

class WinFactory {
    public:
        virtual ~WinFactory() {};
        virtual std::string Draw() const = 0;
};
class WinButton : public WinFactory {
    public:
        std::string Draw() const override {
            return "Dibujando Button Windows";
        }
};
class WinCheckBox : public WinFactory {
    private:
        std::string Draw() const override {
            return "Dibujando Checkbox Windows";
        }
};

class LinuxFactory {
    public:
        virtual ~LinuxFactory() {};
        virtual std::string Draw() const = 0;
};
class LinuxButton : public LinuxFactory {
    public:
        std::string Draw() const override {
            return "Dibujando Button Linux";
        }
};
class LinuxCheckBox : public LinuxFactory {
    public:
        std::string Draw() const override {
            return "Dibujando CheckBox Linux";
        }
};


class MacFactory {
    public:
        virtual ~MacFactory() {};
        virtual std::string Draw() const = 0;
        virtual std::string draw_W(const WinFactory& colaborador) const = 0;
        virtual std::string draw_L(const LinuxFactory& colaborador) const = 0;
};
class MacButton : public MacFactory {
    public:
        std::string Draw() const override {
            return "Dibujando Button Mac";
        }
        std::string draw_W(const WinFactory& colaborador) const override {
            const std::string result = colaborador.Draw();
            return "Dibujando Button Mac con ayuda de " + result;
        }
        std::string draw_L(const LinuxFactory& colaborador) const override {
            const std::string result = colaborador.Draw();
            return "Dibujando Button Mac con ayuda de " + result;
        }
};
class MacCheckBox : public MacFactory {
    public:
        std::string Draw() const override {
            return "Dibujando CheckBox Mac";
        }
        std::string draw_W(const WinFactory& colaborador) const override {
            const std::string result = colaborador.Draw();
                return "Dibujando CheckBox Mac con ayuda de " + result;
        }
        std::string draw_L(const LinuxFactory& colaborador) const override {
            const std::string result = colaborador.Draw();
                return "Dibujando CheckBox Mac con ayuda de " + result;
        }
};

class GUIFactory {
    public:
        virtual WinFactory* CrearControlW() const = 0;
        virtual MacFactory* CrearControlM() const = 0;
        virtual LinuxFactory* CrearControlL() const = 0;
};

class Button : public GUIFactory {
    public:
        WinFactory* CrearControlW() const override {
            return new WinButton();
        }
        MacFactory* CrearControlM() const override {
            return new MacButton();
        }
        LinuxFactory* CrearControlL() const override {
            return new LinuxButton();
        }
};
class Checkbox : public GUIFactory {
    public:
        WinFactory* CrearControlW() const override {
            return new WinCheckBox();
        }
        MacFactory* CrearControlM() const override {
            return new MacCheckBox();
        }
        LinuxFactory* CrearControlL() const override {
            return new LinuxCheckBox();
        }
};

void Aplication(const GUIFactory& f,int os) {
    if (os==1) {
        const WinFactory* producto_windows = f.CrearControlW();
        std::cout << producto_windows->Draw() << std::endl;
        delete producto_windows;
    }
    else if (os==2) {
        const MacFactory* producto_mac = f.CrearControlM();
        std::cout << producto_mac->Draw() << std::endl;
        delete producto_mac;
    }
    else if (os==3) {
        const LinuxFactory* producto_linux = f.CrearControlL();
        std::cout << producto_linux->Draw() << std::endl;
        delete producto_linux;
    }
}

int main() {
    std::cout << "Cliente: Windows \n";
    Button* f1 = new Button();
    Aplication(*f1,1); // 1: windows
    delete f1;
    std::cout << std::endl;
    std::cout << "Cliente: Mac \n";
    Button* f2 = new Button();
    Aplication(*f2,2); // 2: mac
    delete f2;
    std::cout << std::endl;
    std::cout << "Cliente: Linux \n";
    Button* f3 = new Button();
    Checkbox* f4 = new Checkbox();
    Aplication(*f3,3); // 3: linux
    Aplication(*f4,3);
    delete f3;
    delete f4;
    return 0;
}