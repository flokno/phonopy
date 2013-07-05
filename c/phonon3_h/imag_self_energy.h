#ifndef __imag_self_energy_H__
#define __imag_self_energy_H__

#include "phonoc_array.h"

void get_imag_self_energy(double *gamma,
			  const Darray *fc3_normal_sqared,
			  const Darray *freq_points,
			  const double *frequencies,
			  const int *grid_point_triplets,
			  const int *triplet_weights,
			  const double sigma,
			  const double temperature,
			  const double unit_conversion_factor);

#endif
