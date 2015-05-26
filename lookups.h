/* 
 * File:   lookups.h
 * Author: root
 *
 * Created on May 25, 2015, 10:09 PM
 */

#ifndef LOOKUPS_H
#define	LOOKUPS_H

#ifdef	__cplusplus
extern "C" {
#endif

//Lookup table containing 2000 samples of a 300hz sine wav at an amplitude of 1
//static const float sin300_lookup[] = 
//{0,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,1.2246e-16,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-2.4493e-16,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,3.6739e-16,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-4.8986e-16,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,6.1232e-16,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-7.3479e-16,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,8.5725e-16,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-9.7972e-16,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,1.1022e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-1.2246e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,4.8998e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-1.4696e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-1.9607e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-1.7145e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,5.3897e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-1.9594e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-1.4708e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-2.2044e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,5.8795e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-2.4493e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-9.8096e-16,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-9.7997e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,6.3694e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-2.9392e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-4.911e-16,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,3.9213e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,6.8593e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-3.429e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-1.238e-18,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-1.0779e-14,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,7.3491e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-3.9189e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,4.8862e-16,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,2.9416e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,7.839e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-4.4087e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,9.7848e-16,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-1.1759e-14,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,8.3288e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-4.8986e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,1.5679e-14,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,1.9619e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,8.8187e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-1.9599e-14,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,1.9582e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-1.2739e-14,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-4.9023e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-5.8783e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,1.6659e-14,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,9.8219e-16,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-1.8623e-14,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,7.8427e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,2.9379e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,1.4703e-14,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-3.9226e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,2.1564e-14,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-1.0783e-14,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,2.4759e-18,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-1.7644e-14,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,6.863e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-2.4504e-14,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,1.3723e-14,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-2.9429e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-7.8377e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-9.8034e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-9.7724e-16,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-1.6664e-14,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,5.8833e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,4.8973e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,1.2744e-14,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-1.9631e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,1.9604e-14,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-8.8236e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-1.957e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,1.2738e-14,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,4.9035e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-2.2545e-14,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,1.1764e-14,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-9.8343e-16,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-9.7972e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-7.8439e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,2.5485e-14,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-1.4704e-14,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,3.9238e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,6.8568e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-1.7637e-14,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,2.8418e-14,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,1.7645e-14,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-6.8642e-15,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-3.9164e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,1.4697e-14,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,3.1366e-14,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-2.0585e-14,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,9.8046e-15,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,9.76e-16,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,-1.1757e-14,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,2.2537e-14,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,2.3526e-14,0.15643,0.30902,0.45399,0.58779,0.70711,0.80902,0.89101,0.95106,0.98769,1,0.98769,0.95106,0.89101,0.80902,0.70711,0.58779,0.45399,0.30902,0.15643,-1.2745e-14,-0.15643,-0.30902,-0.45399,-0.58779,-0.70711,-0.80902,-0.89101,-0.95106,-0.98769,-1,-0.98769,-0.95106,-0.89101,-0.80902,-0.70711,-0.58779,-0.45399,-0.30902,-0.15643,1.9644e-15};

//static const float sin500_lookup[] = 
//{0,0.25932,0.50091,0.70822,0.86707,0.9666,1,0.96497,0.86392,0.70377,0.49546,0.25325,-0.0062831,-0.26539,-0.50633,-0.71264,-0.87018,-0.96819,-0.99996,-0.9633,-0.86074,-0.69929,-0.48999,-0.24717,0.012566,0.27144,0.51174,0.71703,0.87326,0.96974,0.99988,0.9616,0.85753,0.69478,0.4845,0.24108,-0.018848,-0.27748,-0.51713,-0.7214,-0.87631,-0.97126,-0.99976,-0.95985,-0.85428,-0.69025,-0.479,-0.23497,0.02513,0.28351,0.5225,0.72573,0.87932,0.97274,0.9996,0.95807,0.85099,0.68569,0.47347,0.22886,-0.031411,-0.28953,-0.52785,-0.73004,-0.88229,-0.97417,-0.9994,-0.95625,-0.84768,-0.6811,-0.46793,-0.22274,0.03769,0.29554,0.53317,0.73432,0.88523,0.97557,0.99917,0.9544,0.84433,0.67649,0.46237,0.21661,-0.043968,-0.30154,-0.53848,-0.73857,-0.88814,-0.97693,-0.99889,-0.9525,-0.84094,-0.67185,-0.45679,-0.21047,0.050244,0.30752,0.54376,0.74279,0.89101,0.97826,0.99857,0.95057,0.83753,0.66718,0.45119,0.20433,-0.056519,-0.3135,-0.54902,-0.74699,-0.89384,-0.97954,-0.99822,-0.9486,-0.83408,-0.66249,-0.44557,-0.19817,0.062791,0.31946,0.55426,0.75115,0.89664,0.98079,0.99782,0.94659,0.8306,0.65777,0.43994,0.19201,-0.06906,-0.3254,-0.55948,-0.75528,-0.89941,-0.98199,-0.99739,-0.94455,-0.82708,-0.65302,-0.43429,-0.18584,0.075327,0.33134,0.56468,0.75938,0.90213,0.98316,0.99692,0.94247,0.82353,0.64825,0.42862,0.17966,-0.081591,-0.33726,-0.56985,-0.76346,-0.90483,-0.98429,-0.9964,-0.94035,-0.81995,-0.64346,-0.42293,-0.17348,0.087851,0.34317,0.57501,0.7675,0.90748,0.98538,0.99585,0.93819,0.81634,0.63863,0.41723,0.16728,-0.094108,-0.34906,-0.58013,-0.77151,-0.91011,-0.98643,-0.99526,-0.936,-0.81269,-0.63379,-0.41151,-0.16109,0.10036,0.35494,0.58524,0.7755,0.91269,0.98744,0.99463,0.93377,0.80902,0.62891,0.40578,0.15488,-0.10661,-0.36081,-0.59032,-0.77945,-0.91524,-0.98841,-0.99396,-0.9315,-0.80531,-0.62402,-0.40003,-0.14867,0.11286,0.36666,0.59538,0.78337,0.91775,0.98935,0.99325,0.9292,0.80157,0.61909,0.39426,0.14246,-0.1191,-0.3725,-0.60042,-0.78726,-0.92023,-0.99024,-0.9925,-0.92686,-0.79779,-0.61415,-0.38848,-0.13623,0.12533,0.37833,0.60543,0.79112,0.92267,0.9911,0.99172,0.92448,0.79399,0.60918,0.38268,0.13001,-0.13156,-0.38413,-0.61042,-0.79494,-0.92508,-0.99192,-0.99089,-0.92207,-0.79016,-0.60418,-0.37687,-0.12377,0.13779,0.38993,0.61539,0.79874,0.92745,0.99269,0.99002,0.91962,0.78629,0.59916,0.37104,0.11754,-0.14401,-0.39571,-0.62033,-0.80251,-0.92978,-0.99343,-0.98912,-0.91713,-0.78239,-0.59412,-0.3652,-0.1113,0.15023,0.40147,0.62524,0.80624,0.93207,0.99413,0.98817,0.91461,0.77846,0.58906,0.35935,0.10505,-0.15643,-0.40721,-0.63013,-0.80994,-0.93433,-0.99479,-0.98719,-0.91205,-0.7745,-0.58397,-0.35347,-0.098799,0.16264,0.41295,0.635,0.81361,0.93655,0.99541,0.98617,0.90945,0.77051,0.57885,0.34759,0.092544,-0.16883,-0.41866,-0.63984,-0.81725,-0.93873,-0.99599,-0.98511,-0.90682,-0.76649,-0.57372,-0.34169,-0.086286,0.17502,0.42436,0.64466,0.82085,0.94088,0.99654,0.98401,0.90416,0.76244,0.56856,0.33578,0.080025,-0.18121,-0.43004,-0.64945,-0.82442,-0.94299,-0.99704,-0.98287,-0.90146,-0.75836,-0.56338,-0.32986,-0.07376,0.18738,0.4357,0.65421,0.82796,0.94506,0.9975,0.98169,0.89872,0.75425,0.55818,0.32392,0.067493,-0.19355,-0.44135,-0.65895,-0.83147,-0.9471,-0.99793,-0.98048,-0.89594,-0.75011,-0.55296,-0.31797,-0.061223,0.19971,0.44698,0.66367,0.83494,0.9491,0.99831,0.97922,0.89314,0.74594,0.54771,0.312,0.05495,-0.20586,-0.45259,-0.66835,-0.83839,-0.95106,-0.99866,-0.97793,-0.89029,-0.74174,-0.54244,-0.30603,-0.048675,0.21201,0.45818,0.67301,0.84179,0.95298,0.99896,0.9766,0.88741,0.73751,0.53715,0.30004,0.042399,-0.21814,-0.46376,-0.67765,-0.84517,-0.95486,-0.99923,-0.97523,-0.8845,-0.73326,-0.53184,-0.29404,-0.03612,0.22427,0.46932,0.68225,0.84851,0.95671,0.99946,0.97382,0.88155,0.72897,0.52651,0.28803,0.029841,-0.23039,-0.47486,-0.68683,-0.85182,-0.95852,-0.99964,-0.97237,-0.87857,-0.72465,-0.52116,-0.28201,-0.02356,0.2365,0.48038,0.69139,0.85509,0.96029,0.99979,0.97088,0.87555,0.72031,0.51579,0.27597,0.017278,-0.2426,-0.48588,-0.69591,-0.85833,-0.96203,-0.9999,-0.96936,-0.8725,-0.71594,-0.51039,-0.26993,-0.010995,0.24869,0.49136,0.70041,0.86154,0.96372,0.99997,0.9678,0.86941,0.71154,0.50498,0.26387,0.0047124,-0.25477,-0.49682,-0.70488,-0.86471,-0.96538,-1,-0.9662,-0.86629,-0.70711,-0.49955,-0.25781,0.0015708,0.26084,0.50227,0.70932,0.86785,0.967,0.99999,0.96456,0.86313,0.70265,0.49409,0.25173,-0.0078539,-0.2669,-0.50769,-0.71374,-0.87096,-0.96858,-0.99994,-0.96288,-0.85994,-0.69817,-0.48862,-0.24565,0.014137,0.27295,0.51309,0.71813,0.87403,0.97013,0.99985,0.96117,0.85672,0.69365,0.48313,0.23955,-0.020419,-0.27899,-0.51847,-0.72248,-0.87706,-0.97163,-0.99972,-0.95941,-0.85346,-0.68911,-0.47762,-0.23345,0.0267,0.28502,0.52384,0.72681,0.88006,0.9731,0.99955,0.95762,0.85017,0.68455,0.47209,0.22733,-0.032981,-0.29104,-0.52918,-0.73112,-0.88303,-0.97453,-0.99935,-0.95579,-0.84684,-0.67995,-0.46654,-0.22121,0.03926,0.29704,0.5345,0.73539,0.88596,0.97592,0.9991,0.95393,0.84349,0.67533,0.46097,0.21508,-0.045537,-0.30304,-0.5398,-0.73963,-0.88886,-0.97727,-0.99881,-0.95202,-0.84009,-0.67069,-0.45539,-0.20894,0.051813,0.30902,0.54508,0.74385,0.89172,0.97858,0.99849,0.95008,0.83667,0.66601,0.44979,0.20279,-0.058087,-0.31499,-0.55034,-0.74803,-0.89454,-0.97986,-0.99812,-0.9481,-0.83321,-0.66131,-0.44417,-0.19663,0.064358,0.32094,0.55557,0.75218,0.89734,0.98109,0.99772,0.94609,0.82972,0.65659,0.43853,0.19047,-0.070627,-0.32689,-0.56078,-0.75631,-0.90009,-0.98229,-0.99728,-0.94403,-0.8262,-0.65183,-0.43287,-0.18429,0.076893,0.33282,0.56597,0.76041,0.90281,0.98345,0.99679,0.94194,0.82264,0.64706,0.4272,0.17812,-0.083156,-0.33874,-0.57114,-0.76447,-0.90549,-0.98456,-0.99627,-0.93981,-0.81905,-0.64225,-0.42151,-0.17193,0.089416,0.34464,0.57629,0.76851,0.90814,0.98564,0.99571,0.93765,0.81543,0.63742,0.4158,0.16574,-0.095672,-0.35053,-0.58141,-0.77251,-0.91076,-0.98669,-0.99511,-0.93544,-0.81178,-0.63257,-0.41008,-0.15954,0.10192,0.35641,0.58651,0.77649,0.91333,0.98769,0.99447,0.9332,0.80809,0.62769,0.40434,0.15333,-0.10817,-0.36228,-0.59159,-0.78043,-0.91587,-0.98865,-0.99379,-0.93093,-0.80438,-0.62279,-0.39859,-0.14712,0.11442,0.36812,0.59665,0.78434,0.91838,0.98958,0.99307,0.92862,0.80063,0.61786,0.39282,0.1409,-0.12066,-0.37396,-0.60168,-0.78823,-0.92085,-0.99046,-0.99231,-0.92627,-0.79685,-0.61291,-0.38703,-0.13468,0.12689,0.37978,0.60668,0.79208,0.92328,0.99131,0.99151,0.92388,0.79303,0.60793,0.38123,0.12845,-0.13312,-0.38558,-0.61167,-0.7959,-0.92567,-0.99211,-0.99068,-0.92146,-0.78919,-0.60293,-0.37542,-0.12222,0.13935,0.39137,0.61662,0.79968,0.92803,0.99288,0.9898,0.919,0.78532,0.5979,0.36958,0.11598,-0.14557,-0.39715,-0.62156,-0.80344,-0.93035,-0.99361,-0.98889,-0.9165,-0.78141,-0.59286,-0.36374,-0.10973,0.15178,0.40291,0.62647,0.80717,0.93264,0.9943,0.98793,0.91397,0.77748,0.58779,0.35788,0.10349,-0.15799,-0.40865,-0.63135,-0.81086,-0.93489,-0.99495,-0.98694,-0.9114,-0.77351,-0.58269,-0.35201,-0.097235,0.16419,0.41438,0.63621,0.81452,0.9371,0.99556,0.98591,0.9088,0.76951,0.57757,0.34612,0.09098,-0.17038,-0.42009,-0.64105,-0.81815,-0.93927,-0.99613,-0.98484,-0.90616,-0.76548,-0.57243,-0.34022,-0.084721,0.17657,0.42578,0.64586,0.82175,0.94141,0.99667,0.98373,0.90348,0.76143,0.56727,0.3343,0.078459,-0.18275,-0.43146,-0.65064,-0.82531,-0.94351,-0.99716,-0.98258,-0.90077,-0.75734,-0.56208,-0.32837,-0.072194,0.18892,0.43712,0.6554,0.82884,0.94558,0.99761,0.98139,0.89803,0.75322,0.55688,0.32243,0.065926,-0.19509,-0.44276,-0.66013,-0.83234,-0.9476,-0.99803,-0.98017,-0.89525,-0.74907,-0.55165,-0.31648,-0.059655,0.20125,0.44838,0.66484,0.83581,0.94959,0.9984,0.9789,0.89243,0.74489,0.54639,0.31051,0.053382,-0.2074,-0.45399,-0.66952,-0.83924,-0.95154,-0.99874,-0.9776,-0.88958,-0.74069,-0.54112,-0.30453,-0.047106,0.21354,0.45958,0.67417,0.84264,0.95345,0.99903,0.97626,0.88669,0.73645,0.53583,0.29854,0.040829,-0.21968,-0.46515,-0.6788,-0.84601,-0.95533,-0.99929,-0.97488,-0.88377,-0.73219,-0.53051,-0.29254,-0.034551,0.2258,0.4707,0.6834,0.84934,0.95717,0.99951,0.97346,0.88081,0.72789,0.52517,0.28652,0.028271,-0.23192,-0.47624,-0.68797,-0.85264,-0.95897,-0.99968,-0.972,-0.87782,-0.72357,-0.51982,-0.2805,-0.021989,0.23802,0.48175,0.69252,0.85591,0.96073,0.99982,0.97051,0.87479,0.71922,0.51444,0.27446,0.015707,-0.24412,-0.48725,-0.69704,-0.85914,-0.96246,-0.99992,-0.96897,-0.87173,-0.71484,-0.50904,-0.26842,-0.0094246,0.25021,0.49273,0.70153,0.86234,0.96414,0.99998,0.9674,0.86863,0.71043,0.50362,0.26236,0.0031416,-0.25629,-0.49819,-0.706,-0.8655,-0.96579,-1,-0.96579,-0.8655,-0.706,-0.49819,-0.25629,0.0031416,0.26236,0.50362,0.71043,0.86863,0.9674,0.99998,0.96414,0.86234,0.70153,0.49273,0.25021,-0.0094246,-0.26842,-0.50904,-0.71484,-0.87173,-0.96897,-0.99992,-0.96246,-0.85914,-0.69704,-0.48725,-0.24412,0.015707,0.27446,0.51444,0.71922,0.87479,0.97051,0.99982,0.96073,0.85591,0.69252,0.48175,0.23802,-0.021989,-0.2805,-0.51982,-0.72357,-0.87782,-0.972,-0.99968,-0.95897,-0.85264,-0.68797,-0.47624,-0.23192,0.028271,0.28652,0.52517,0.72789,0.88081,0.97346,0.99951,0.95717,0.84934,0.6834,0.4707,0.2258,-0.034551,-0.29254,-0.53051,-0.73219,-0.88377,-0.97488,-0.99929,-0.95533,-0.84601,-0.6788,-0.46515,-0.21968,0.040829,0.29854,0.53583,0.73645,0.88669,0.97626,0.99903,0.95345,0.84264,0.67417,0.45958,0.21354,-0.047106,-0.30453,-0.54112,-0.74069,-0.88958,-0.9776,-0.99874,-0.95154,-0.83924,-0.66952,-0.45399,-0.2074,0.053382,0.31051,0.54639,0.74489,0.89243,0.9789,0.9984,0.94959,0.83581,0.66484,0.44838,0.20125,-0.059655,-0.31648,-0.55165,-0.74907,-0.89525,-0.98017,-0.99803,-0.9476,-0.83234,-0.66013,-0.44276,-0.19509,0.065926,0.32243,0.55688,0.75322,0.89803,0.98139,0.99761,0.94558,0.82884,0.6554,0.43712,0.18892,-0.072194,-0.32837,-0.56208,-0.75734,-0.90077,-0.98258,-0.99716,-0.94351,-0.82531,-0.65064,-0.43146,-0.18275,0.078459,0.3343,0.56727,0.76143,0.90348,0.98373,0.99667,0.94141,0.82175,0.64586,0.42578,0.17657,-0.084721,-0.34022,-0.57243,-0.76548,-0.90616,-0.98484,-0.99613,-0.93927,-0.81815,-0.64105,-0.42009,-0.17038,0.09098,0.34612,0.57757,0.76951,0.9088,0.98591,0.99556,0.9371,0.81452,0.63621,0.41438,0.16419,-0.097235,-0.35201,-0.58269,-0.77351,-0.9114,-0.98694,-0.99495,-0.93489,-0.81086,-0.63135,-0.40865,-0.15799,0.10349,0.35788,0.58779,0.77748,0.91397,0.98793,0.9943,0.93264,0.80717,0.62647,0.40291,0.15178,-0.10973,-0.36374,-0.59286,-0.78141,-0.9165,-0.98889,-0.99361,-0.93035,-0.80344,-0.62156,-0.39715,-0.14557,0.11598,0.36958,0.5979,0.78532,0.919,0.9898,0.99288,0.92803,0.79968,0.61662,0.39137,0.13935,-0.12222,-0.37542,-0.60293,-0.78919,-0.92146,-0.99068,-0.99211,-0.92567,-0.7959,-0.61167,-0.38558,-0.13312,0.12845,0.38123,0.60793,0.79303,0.92388,0.99151,0.99131,0.92328,0.79208,0.60668,0.37978,0.12689,-0.13468,-0.38703,-0.61291,-0.79685,-0.92627,-0.99231,-0.99046,-0.92085,-0.78823,-0.60168,-0.37396,-0.12066,0.1409,0.39282,0.61786,0.80063,0.92862,0.99307,0.98958,0.91838,0.78434,0.59665,0.36812,0.11442,-0.14712,-0.39859,-0.62279,-0.80438,-0.93093,-0.99379,-0.98865,-0.91587,-0.78043,-0.59159,-0.36228,-0.10817,0.15333,0.40434,0.62769,0.80809,0.9332,0.99447,0.98769,0.91333,0.77649,0.58651,0.35641,0.10192,-0.15954,-0.41008,-0.63257,-0.81178,-0.93544,-0.99511,-0.98669,-0.91076,-0.77251,-0.58141,-0.35053,-0.095672,0.16574,0.4158,0.63742,0.81543,0.93765,0.99571,0.98564,0.90814,0.76851,0.57629,0.34464,0.089416,-0.17193,-0.42151,-0.64225,-0.81905,-0.93981,-0.99627,-0.98456,-0.90549,-0.76447,-0.57114,-0.33874,-0.083156,0.17812,0.4272,0.64706,0.82264,0.94194,0.99679,0.98345,0.90281,0.76041,0.56597,0.33282,0.076893,-0.18429,-0.43287,-0.65183,-0.8262,-0.94403,-0.99728,-0.98229,-0.90009,-0.75631,-0.56078,-0.32689,-0.070627,0.19047,0.43853,0.65659,0.82972,0.94609,0.99772,0.98109,0.89734,0.75218,0.55557,0.32094,0.064358,-0.19663,-0.44417,-0.66131,-0.83321,-0.9481,-0.99812,-0.97986,-0.89454,-0.74803,-0.55034,-0.31499,-0.058087,0.20279,0.44979,0.66601,0.83667,0.95008,0.99849,0.97858,0.89172,0.74385,0.54508,0.30902,0.051813,-0.20894,-0.45539,-0.67069,-0.84009,-0.95202,-0.99881,-0.97727,-0.88886,-0.73963,-0.5398,-0.30304,-0.045537,0.21508,0.46097,0.67533,0.84349,0.95393,0.9991,0.97592,0.88596,0.73539,0.5345,0.29704,0.03926,-0.22121,-0.46654,-0.67995,-0.84684,-0.95579,-0.99935,-0.97453,-0.88303,-0.73112,-0.52918,-0.29104,-0.032981,0.22733,0.47209,0.68455,0.85017,0.95762,0.99955,0.9731,0.88006,0.72681,0.52384,0.28502,0.0267,-0.23345,-0.47762,-0.68911,-0.85346,-0.95941,-0.99972,-0.97163,-0.87706,-0.72248,-0.51847,-0.27899,-0.020419,0.23955,0.48313,0.69365,0.85672,0.96117,0.99985,0.97013,0.87403,0.71813,0.51309,0.27295,0.014137,-0.24565,-0.48862,-0.69817,-0.85994,-0.96288,-0.99994,-0.96858,-0.87096,-0.71374,-0.50769,-0.2669,-0.0078539,0.25173,0.49409,0.70265,0.86313,0.96456,0.99999,0.967,0.86785,0.70932,0.50227,0.26084,0.0015708,-0.25781,-0.49955,-0.70711,-0.86629,-0.9662,-1,-0.96538,-0.86471,-0.70488,-0.49682,-0.25477,0.0047124,0.26387,0.50498,0.71154,0.86941,0.9678,0.99997,0.96372,0.86154,0.70041,0.49136,0.24869,-0.010995,-0.26993,-0.51039,-0.71594,-0.8725,-0.96936,-0.9999,-0.96203,-0.85833,-0.69591,-0.48588,-0.2426,0.017278,0.27597,0.51579,0.72031,0.87555,0.97088,0.99979,0.96029,0.85509,0.69139,0.48038,0.2365,-0.02356,-0.28201,-0.52116,-0.72465,-0.87857,-0.97237,-0.99964,-0.95852,-0.85182,-0.68683,-0.47486,-0.23039,0.029841,0.28803,0.52651,0.72897,0.88155,0.97382,0.99946,0.95671,0.84851,0.68225,0.46932,0.22427,-0.03612,-0.29404,-0.53184,-0.73326,-0.8845,-0.97523,-0.99923,-0.95486,-0.84517,-0.67765,-0.46376,-0.21814,0.042399,0.30004,0.53715,0.73751,0.88741,0.9766,0.99896,0.95298,0.84179,0.67301,0.45818,0.21201,-0.048675,-0.30603,-0.54244,-0.74174,-0.89029,-0.97793,-0.99866,-0.95106,-0.83839,-0.66835,-0.45259,-0.20586,0.05495,0.312,0.54771,0.74594,0.89314,0.97922,0.99831,0.9491,0.83494,0.66367,0.44698,0.19971,-0.061223,-0.31797,-0.55296,-0.75011,-0.89594,-0.98048,-0.99793,-0.9471,-0.83147,-0.65895,-0.44135,-0.19355,0.067493,0.32392,0.55818,0.75425,0.89872,0.98169,0.9975,0.94506,0.82796,0.65421,0.4357,0.18738,-0.07376,-0.32986,-0.56338,-0.75836,-0.90146,-0.98287,-0.99704,-0.94299,-0.82442,-0.64945,-0.43004,-0.18121,0.080025,0.33578,0.56856,0.76244,0.90416,0.98401,0.99654,0.94088,0.82085,0.64466,0.42436,0.17502,-0.086286,-0.34169,-0.57372,-0.76649,-0.90682,-0.98511,-0.99599,-0.93873,-0.81725,-0.63984,-0.41866,-0.16883,0.092544,0.34759,0.57885,0.77051,0.90945,0.98617,0.99541,0.93655,0.81361,0.635,0.41295,0.16264,-0.098799,-0.35347,-0.58397,-0.7745,-0.91205,-0.98719,-0.99479,-0.93433,-0.80994,-0.63013,-0.40721,-0.15643,0.10505,0.35935,0.58906,0.77846,0.91461,0.98817,0.99413,0.93207,0.80624,0.62524,0.40147,0.15023,-0.1113,-0.3652,-0.59412,-0.78239,-0.91713,-0.98912,-0.99343,-0.92978,-0.80251,-0.62033,-0.39571,-0.14401,0.11754,0.37104,0.59916,0.78629,0.91962,0.99002,0.99269,0.92745,0.79874,0.61539,0.38993,0.13779,-0.12377,-0.37687,-0.60418,-0.79016,-0.92207,-0.99089,-0.99192,-0.92508,-0.79494,-0.61042,-0.38413,-0.13156,0.13001,0.38268,0.60918,0.79399,0.92448,0.99172,0.9911,0.92267,0.79112,0.60543,0.37833,0.12533,-0.13623,-0.38848,-0.61415,-0.79779,-0.92686,-0.9925,-0.99024,-0.92023,-0.78726,-0.60042,-0.3725,-0.1191,0.14246,0.39426,0.61909,0.80157,0.9292,0.99325,0.98935,0.91775,0.78337,0.59538,0.36666,0.11286,-0.14867,-0.40003,-0.62402,-0.80531,-0.9315,-0.99396,-0.98841,-0.91524,-0.77945,-0.59032,-0.36081,-0.10661,0.15488,0.40578,0.62891,0.80902,0.93377,0.99463,0.98744,0.91269,0.7755,0.58524,0.35494,0.10036,-0.16109,-0.41151,-0.63379,-0.81269,-0.936,-0.99526,-0.98643,-0.91011,-0.77151,-0.58013,-0.34906,-0.094108,0.16728,0.41723,0.63863,0.81634,0.93819,0.99585,0.98538,0.90748,0.7675,0.57501,0.34317,0.087851,-0.17348,-0.42293,-0.64346,-0.81995,-0.94035,-0.9964,-0.98429,-0.90483,-0.76346,-0.56985,-0.33726,-0.081591,0.17966,0.42862,0.64825,0.82353,0.94247,0.99692,0.98316,0.90213,0.75938,0.56468,0.33134,0.075327,-0.18584,-0.43429,-0.65302,-0.82708,-0.94455,-0.99739,-0.98199,-0.89941,-0.75528,-0.55948,-0.3254,-0.06906,0.19201,0.43994,0.65777,0.8306,0.94659,0.99782,0.98079,0.89664,0.75115,0.55426,0.31946,0.062791,-0.19817,-0.44557,-0.66249,-0.83408,-0.9486,-0.99822,-0.97954,-0.89384,-0.74699,-0.54902,-0.3135,-0.056519,0.20433,0.45119,0.66718,0.83753,0.95057,0.99857,0.97826,0.89101,0.74279,0.54376,0.30752,0.050244,-0.21047,-0.45679,-0.67185,-0.84094,-0.9525,-0.99889,-0.97693,-0.88814,-0.73857,-0.53848,-0.30154,-0.043968,0.21661,0.46237,0.67649,0.84433,0.9544,0.99917,0.97557,0.88523,0.73432,0.53317,0.29554,0.03769,-0.22274,-0.46793,-0.6811,-0.84768,-0.95625,-0.9994,-0.97417,-0.88229,-0.73004,-0.52785,-0.28953,-0.031411,0.22886,0.47347,0.68569,0.85099,0.95807,0.9996,0.97274,0.87932,0.72573,0.5225,0.28351,0.02513,-0.23497,-0.479,-0.69025,-0.85428,-0.95985,-0.99976,-0.97126,-0.87631,-0.7214,-0.51713,-0.27748,-0.018848,0.24108,0.4845,0.69478,0.85753,0.9616,0.99988,0.96974,0.87326,0.71703,0.51174,0.27144,0.012566,-0.24717,-0.48999,-0.69929,-0.86074,-0.9633,-0.99996,-0.96819,-0.87018,-0.71264,-0.50633,-0.26539,-0.0062831,0.25325,0.49546,0.70377,0.86392,0.96497,1,0.9666,0.86707,0.70822,0.50091,0.25932,-1.8628e-14};

    static const float lookup[] = 
    {};
    


#ifdef	__cplusplus
}
#endif

#endif	/* LOOKUPS_H */

