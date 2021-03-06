// PQElmt.cpp
#include "PQElmt.hpp"

/*
    NIM: 13520124
    Nama: Owen Christian Wijaya
    Topik: Tutorial OOP 1
    Deskripsi: Implementasi PQElmt
*/

PQElmt::PQElmt() {
  this->value = 0;
  this->prio = 0;
}

PQElmt::PQElmt(int value, int prio) {
  this->value = value;
  this->prio = prio;
}

PQElmt::PQElmt(const PQElmt& other) {
  this->value = other.value;
  this->prio = other.prio;
}

PQElmt::~PQElmt() {
  //
}

int PQElmt::getValue() const {
  return this->value;
}

int PQElmt::getPrio() const {
  return this->prio;
}

bool PQElmt::operator==(const PQElmt& other) {
  return (this->getPrio() == other.getPrio() && this->getValue() == other.getValue());
}

bool PQElmt::operator<(const PQElmt& other) {
  return (this->getPrio() < other.getPrio() || (this->getPrio() == other.getPrio() && this->getValue() > other.getValue()));
}

bool PQElmt::operator>(const PQElmt& other) {
  return (this->getPrio() > other.getPrio() || (this->getPrio() == other.getPrio() && this->getValue() < other.getValue()));
}