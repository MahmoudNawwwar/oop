
// شرح استخدام كائنات (Objects) مع مصفوفة ديناميكية (Dynamic Array)

#include <iostream>
using namespace std;

// تعريف الكلاس clsA
class clsA {
public:
    int x;

    // Constructor افتراضي - ضروري لحجز المصفوفة الديناميكية
    clsA() {}

    // Constructor بمُعطى لتعيين قيمة x مباشرة
    clsA(int value) {
        x = value;
    }

    // دالة لطباعة قيمة x
    void Print() {
        cout << "The value of x = " << x << endl;
    }
};

int main() {
    short NumberOfObjects = 5;

    // حجز مصفوفة ديناميكية من الكائنات clsA في الذاكرة (Heap)
    clsA* arrA = new clsA[NumberOfObjects];

    // تعيين قيمة لكل عنصر في المصفوفة باستخدام Constructor
    for (int i = 0; i < NumberOfObjects; i++) {
        arrA[i] = clsA(i); // إنشاء كائن مؤقت بقيمة i ونسخه في arrA[i]
    }

    // طباعة القيم المخزنة في كل كائن باستخدام دالة Print()
    for (int i = 0; i < NumberOfObjects; i++) {
        arrA[i].Print();
    }

    // تحرير الذاكرة المحجوزة بعد الانتهاء (Good Practice)
    delete[] arrA;

    system("pause>0");
    return 0;
}
