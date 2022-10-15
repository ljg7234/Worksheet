#include <stdio.h>
unsigned long long pack_employee_data(unsigned id_no, unsigned job_type, unsigned salary, unsigned family);
void print_employee_data(unsigned long long employee);

int main() {
    unsigned id_no, salary, job_type, family;
    print_employee_data(pack_employee_data(999999, 999, 999999999, 9)); // 최대값
    return 0;
}

unsigned long long pack_employee_data(unsigned id_no, unsigned job_type, unsigned salary, unsigned family) {
    unsigned long long employee = 0;
    employee |= id_no; 
    employee |= job_type << 20;
    employee |= (unsigned long long)salary << 30;
    employee |= (unsigned long long)family << 60;
    return employee;
}

void print_employee_data(unsigned long long employee) { // 코드 
    unsigned id_no,salary,job_type,family;
    id_no = employee & 0xFFFFF;
    job_type = (employee >> 20) & 0x3FF; 
    salary = (employee >> 30) & 0x3FFFFFFF;
    family = (employee >> 60) & 0xF;
    printf("id %u\n",id_no);
    printf("job %u\n",job_type);
    printf("salary %u\n",salary);
    printf("family %u\n",family);

}