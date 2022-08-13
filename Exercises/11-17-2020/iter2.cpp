#include <map>
#include <string>
#include <cstdio>

int main() {
    std::map<std::string, double> gpa1;
    gpa1["Jim"] = 3.79;
    gpa1["Lisa"] = 4.0;

    // This iterates forwards
    for (auto it = gpa1.begin(); it != gpa1.end(); it++) {
        printf("%s: %.2ld\n", it->first.c_str(), it->second);
    }

    printf("\n");

    // This iterates backwards (notice the "r")
    for (auto it = gpa1.rbegin(); it != gpa1.rend(); it++) {
        printf("%s: %.2ld\n", it->first.c_str(), it->second);
    }

    printf("\n");

    // Don't do this! Compare this to the code above
    if (gpa1.size() > 0) {
        for (auto it = gpa1.end();; it--) {
            if (it == gpa1.begin()) {
                continue;
            }
            printf("%s: %.2ld\n", it->first.c_str(), it->second);
            if (it == gpa1.begin()) {
                break;
            }
        }
    }
}