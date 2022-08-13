/**
 * This si the so called "global variable," which causes
 * coupling between the files/modules and makes the
 * functions hard to test. DONT'T USE THIS
 */
// int x

// "Unnamed" namespace, prevents global clash
namespace {
 int x;
}
void inc() {
  x++;
}