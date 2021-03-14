/*
 *
 *  $Id$
 *
 *  This file is part of the Virtual Leaf.
 *
 *  VirtualLeaf is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  VirtualLeaf is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with the Virtual Leaf.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  Copyright 2010 Roeland Merks.
 *
 */

// WARNING: This file is automatically generated by make_parameter_source.pl. Do not edit.
// Do not edit. All edits will be discarded.

#ifndef _PARAMETER_H_
#define _PARAMETER_H_
#include "vector.h"
#include <vector>

//#include <libxml/parser.h>
//#include <libxml/tree.h>
#include <QtXml>

 class Parameter {
		
 public: 
   Parameter();
   ~Parameter();
   void CleanUp(void);
   void Read(const char *filename);
   void Write(ostream &os) const;
   void XMLAdd(QDomElement &root) const;
   void XMLRead(QDomElement &root);
   void AssignValToPar(const char *namec, const char *valc);
   void AssignValArrayToPar(const char *namec, vector<double> valarray);
  char * arrowcolor;
  double arrowsize;
  char * textcolor;
  int cellnumsize;
  int nodenumsize;
  double node_mag;
  double outlinewidth;
  char * cell_outline_color;
  int resize_stride;
  int export_interval;
  char * export_fn_prefix;
  int storage_stride;
  int xml_storage_stride;
  char * datadir;
  double T;
  double lambda_length;
  double yielding_threshold;
  double lambda_celllength;
  double target_length;
  double cell_expansion_rate;
  double cell_div_expansion_rate;
  bool auxin_dependent_growth;
  double ode_accuracy;
  double mc_stepsize;
  double mc_cell_stepsize;
  double energy_threshold;
  double bend_lambda;
  double alignment_lambda;
  double rel_cell_div_threshold;
  double rel_perimeter_stiffness;
  double collapse_node_threshold;
  double morphogen_div_threshold;
  double morphogen_expansion_threshold;
  bool copy_wall;
  double source;
  double * D;
  double * initval;
  double k1;
  double k2;
  double r;
  double kr;
  double km;
  double Pi_tot;
  double transport;
  double ka;
  double pin_prod;
  double pin_prod_in_epidermis;
  double pin_breakdown;
  double pin_breakdown_internal;
  double aux1prod;
  double aux1prodmeso;
  double aux1decay;
  double aux1decaymeso;
  double aux1transport;
  double aux_cons;
  double aux_breakdown;
  double kaux1;
  double kap;
  double leaf_tip_source;
  double sam_efflux;
  double sam_auxin;
  double sam_auxin_breakdown;
  double van3prod;
  double van3autokat;
  double van3sat;
  double k2van3;
  double dt;
  double rd_dt;
  bool movie;
  int nit;
  double maxt;
  int rseed;
  int constituous_expansion_limit;
  double vessel_inh_level;
  double vessel_expansion_rate;
  double d;
  double e;
  double f;
  double c;
  double mu;
  double nu;
  double rho0;
  double rho1;
  double c0;
  double gamma;
  double eps;
  double betaN;
  double gammaN;
  double betaD;
  double gammaD;
  double betaR;
  double gammaR;
  double tau;
  double kt;
  double kc;
  double krs;
  int i1;
  int i2;
  bool b4;
  char * dir1;
  char * dir2;
 private:
 };

 ostream &operator<<(ostream &os, Parameter &p);
 const char *sbool(const bool &p);


#endif
