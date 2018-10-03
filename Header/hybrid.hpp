#ifndef _HYBRID_HPP_
#define _HYBRID_HPP_

#include "coloring_algorithm.hpp"
#include "lmxrlf.hpp"
#include "tabucol.hpp"

using GraphColoring::GraphColor;
using GraphColoring::Lmxrlf;
using GraphColoring::Tabucol;

namespace GraphColoring{
	class Hybrid : public GraphColor {
		private: 
			int condition;
            int coloring;
			map< string,vector<string> > get_subgraph(map< string,int > coloring);

		public: 
            /* Constructors */
			Hybrid(map<string,vector<string> > input_graph) :GraphColor(input_graph) { this->condition = 0; } 
			Hybrid(map<string,vector<string> > input_graph, int con) :GraphColor(input_graph) { this->condition = con; } 

            /* Mutators */
			void set_condition(int con) { this->condition = con; }

            /* Accessors */
			map<string,int> color();
			string get_algorithm() { return "HYBRID"; }
	};
}

#endif //_HYBRID_HPP_
