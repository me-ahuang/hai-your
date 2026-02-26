#include <iostream>
#include <iomanip>
using namespace std;

class VehicleSpeed {
private:
    double distance;
    double time;
    
public:
    VehicleSpeed() : distance(0), time(0) {}
    
    void setData(double d, double t) {
        distance = d;
        time = t;
    }
    
    double calculateSpeed() {
        if (time <= 0) {
            cout << "时间必须大于0！" << endl;
            return 0;
        }
        return distance / time;
    }
    
    void displayResult() {
        cout << fixed << setprecision(2);
        cout << "\n=== 计算结果 ===" << endl;
        cout << "距离: " << distance << " 公里" << endl;
        cout << "时间: " << time << " 小时" << endl;
        cout << "速度: " << calculateSpeed() << " 公里/小时" << endl;
        cout << "速度: " << calculateSpeed() / 1.609 << " 英里/小时" << endl;
        cout << "速度: " << calculateSpeed() * 1000 / 3600 << " 米/秒" << endl;
    }
};

int main() {
    VehicleSpeed vs;
    double d, t;
    
    cout << "=== 车辆速度计算器 ===" << endl;
    cout << "请输入行驶距离（公里）: ";
    cin >> d;
    cout << "请输入行驶时间（小时）: ";
    cin >> t;
    
    vs.setData(d, t);
    vs.displayResult();
    
    return 0;
}