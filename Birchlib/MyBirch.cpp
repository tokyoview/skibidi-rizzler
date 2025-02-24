
#include "MyBirch.h"

Birch::Birch()
{
}

Birch::Birch(double height_)
{
  if (height_ < 0)
  {
    throw std::invalid_argument("osel");
  }
  else
    height = height_;
  numberOfBranches = 1;
  numberOfLeaves = nullptr;
}

Birch::Birch(double height_, int numberOfBranches, int* numberOfLeaves)
{
  if (height_ < 0)
  {
    throw std::invalid_argument("osel");
  }
  else
    height = height_;
  numberOfBranches = 1;
  numberOfLeaves = nullptr;
}

Birch::Birch(const Birch& p)
{
}

Birch::Birch(Birch&& p)
{
}

Birch::~Birch()
{
}

double Birch::GetHeight()
{
  return 3.0;
}

int Birch::GetNumberOfBranches()
{
  return numberOfBranches;
}

int* Birch::GetNumberOfLeaves()
{
  return nullptr;
}

void Birch::SetHeight(double height_)
{
}

void Birch::SetNumberOfBranches(int numberOfBranches_)
{
}

void Birch::SetNumberOfLeaves(int* numberOfBranches_)
{
}

std::ostream& operator<<(std::ostream& o, Birch& b)
{
  return o;
}

std::istream& operator>>(std::istream& i, Birch& b)
{
  return i;
}
