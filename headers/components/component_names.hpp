/* Hector -- A Simple Climate Model
   Copyright (C) 2014-2015  Battelle Memorial Institute

   Please see the accompanying file LICENSE.md for additional licensing
   information.
*/
#ifndef COMPONENT_NAMES_H
#define COMPONENT_NAMES_H
/*
 *  component_names.hpp
 *  hector
 *
 *  Created by Ben on 2/18/11.
 *
 */

// ---------------------- component names --------------------------------------

#define CORE_COMPONENT_NAME "core"

#define CCS_COMPONENT_NAME "carbon-cycle-solver"
#define BOX_MODEL_COMPONENT_NAME "carbon-box-model"
#define SIMPLENBOX_COMPONENT_NAME "simpleNbox"

#define CH4_COMPONENT_NAME "CH4"
#define OH_COMPONENT_NAME   "OH"
#define N2O_COMPONENT_NAME "N2O"
#define TEMPERATURE_COMPONENT_NAME "temperature"

#define OCEAN_COMPONENT_NAME "ocean"
#define ONELINEOCEAN_COMPONENT_NAME "onelineocean"

/***
 * The name of a HC component is X_COMPONENT_BASE + HALOCARBON_EXTENSION
 * The name of a HC emissions var is X_COMPONENT_BASE + EMISSIONS_EXTENSION
 ***/
#define HALOCARBON_EXTENSION "_halocarbon"
#define EMISSIONS_EXTENSION  "_emissions"
#define CF4_COMPONENT_BASE "CF4"
#define C2F6_COMPONENT_BASE "C2F6"
#define HFC23_COMPONENT_BASE "HFC23"
#define HFC32_COMPONENT_BASE "HFC32"
#define HFC4310_COMPONENT_BASE "HFC4310"
#define HFC125_COMPONENT_BASE "HFC125"
#define HFC134a_COMPONENT_BASE "HFC134a"
#define HFC143a_COMPONENT_BASE "HFC143a"
#define HFC227ea_COMPONENT_BASE "HFC227ea"
#define HFC245fa_COMPONENT_BASE "HFC245fa"
#define SF6_COMPONENT_BASE "SF6"
#define CFC11_COMPONENT_BASE "CFC11"
#define CFC12_COMPONENT_BASE "CFC12"
#define CFC113_COMPONENT_BASE "CFC113"
#define CFC114_COMPONENT_BASE "CFC114"
#define CFC115_COMPONENT_BASE "CFC115"
#define CCl4_COMPONENT_BASE "CCl4"
#define CH3CCl3_COMPONENT_BASE "CH3CCl3"
#define HCF22_COMPONENT_BASE "HCF22"
#define HCF141b_COMPONENT_BASE "HCF141b"
#define HCF142b_COMPONENT_BASE "HCF142b"
#define halon1211_COMPONENT_BASE "halon1211"
#define halon1301_COMPONENT_BASE "halon1301"
#define halon2402_COMPONENT_BASE "halon2402"
#define CH3Cl_COMPONENT_BASE "CH3Cl"
#define CH3Br_COMPONENT_BASE "CH3Br"

#define CF4_COMPONENT_NAME CF4_COMPONENT_BASE HALOCARBON_EXTENSION
#define C2F6_COMPONENT_NAME C2F6_COMPONENT_BASE HALOCARBON_EXTENSION
#define HFC23_COMPONENT_NAME HFC23_COMPONENT_BASE HALOCARBON_EXTENSION
#define HFC32_COMPONENT_NAME HFC32_COMPONENT_BASE HALOCARBON_EXTENSION
#define HFC4310_COMPONENT_NAME HFC4310_COMPONENT_BASE HALOCARBON_EXTENSION
#define HFC125_COMPONENT_NAME HFC125_COMPONENT_BASE HALOCARBON_EXTENSION
#define HFC134a_COMPONENT_NAME HFC134a_COMPONENT_BASE HALOCARBON_EXTENSION
#define HFC143a_COMPONENT_NAME HFC143a_COMPONENT_BASE HALOCARBON_EXTENSION
#define HFC227ea_COMPONENT_NAME HFC227ea_COMPONENT_BASE HALOCARBON_EXTENSION
#define HFC245fa_COMPONENT_NAME HFC245fa_COMPONENT_BASE HALOCARBON_EXTENSION
#define SF6_COMPONENT_NAME SF6_COMPONENT_BASE HALOCARBON_EXTENSION
#define CFC11_COMPONENT_NAME CFC11_COMPONENT_BASE HALOCARBON_EXTENSION
#define CFC12_COMPONENT_NAME CFC12_COMPONENT_BASE HALOCARBON_EXTENSION
#define CFC113_COMPONENT_NAME CFC113_COMPONENT_BASE HALOCARBON_EXTENSION
#define CFC114_COMPONENT_NAME CFC114_COMPONENT_BASE HALOCARBON_EXTENSION
#define CFC115_COMPONENT_NAME CFC115_COMPONENT_BASE HALOCARBON_EXTENSION
#define CCl4_COMPONENT_NAME CCl4_COMPONENT_BASE HALOCARBON_EXTENSION
#define CH3CCl3_COMPONENT_NAME CH3CCl3_COMPONENT_BASE HALOCARBON_EXTENSION
#define HCF22_COMPONENT_NAME HCF22_COMPONENT_BASE HALOCARBON_EXTENSION
#define HFC141b_COMPONENT_NAME HCF141b_COMPONENT_BASE HALOCARBON_EXTENSION
#define HFC142b_COMPONENT_NAME HCF142b_COMPONENT_BASE HALOCARBON_EXTENSION
#define halon1211_COMPONENT_NAME halon1211_COMPONENT_BASE HALOCARBON_EXTENSION
#define halon1301_COMPONENT_NAME halon1301_COMPONENT_BASE HALOCARBON_EXTENSION
#define halon2402_COMPONENT_NAME halon2402_COMPONENT_BASE HALOCARBON_EXTENSION
#define CH3Cl_COMPONENT_NAME CH3Cl_COMPONENT_BASE HALOCARBON_EXTENSION
#define CH3Br_COMPONENT_NAME CH3Br_COMPONENT_BASE HALOCARBON_EXTENSION

#define BLACK_CARBON_COMPONENT_NAME "bc"
#define ORGANIC_CARBON_COMPONENT_NAME "oc"
#define SULFUR_COMPONENT_NAME "so2"

#define FORCING_COMPONENT_NAME	"forcing"
#define SLR_COMPONENT_NAME "slr"
#define OZONE_COMPONENT_NAME "ozone"

#define DUMMY_COMPONENT_NAME "dummy-component"

#endif
