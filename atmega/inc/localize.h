#ifndef LOCALIZE_H_
#define LOCALIZE_H_

#include "diff_drive.h"
#include "m_wii.h"
#include <stdbool.h>
#include <stdint.h>

void localize_init(void);
bool localize_wii(pos* posStruct);

#endif /* LOCALIZE_H_ */