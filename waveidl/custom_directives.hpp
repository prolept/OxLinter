/*=============================================================================
    Boost.Wave: A Standard compliant C++ preprocessor library
    http://www.boost.org/

    Copyright (c) 2001-2012 Hartmut Kaiser. Distributed under the Boost
    Software License, Version 1.0. (See accompanying file
    LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/

#if !defined(BOOST_WAVE_CUSTOM_DIRECTIVES_HOOKS_INCLUDED)
#define BOOST_WAVE_CUSTOM_DIRECTIVES_HOOKS_INCLUDED
//#define MY_USE_TEMPLATES 1
#include <cstdio>
#include <ostream>
#include <string>
#include <algorithm>

#include <boost/assert.hpp>
#include <boost/config.hpp>

#include <boost/wave/token_ids.hpp>
#include <boost/wave/util/macro_helpers.hpp>
#include <boost/wave/preprocessing_hooks.hpp>

#include <boost/wave/util/cpp_iterator.hpp>
//#include <boost/wave/token_ids.hpp>
//#include <boost/wave/util/macro_helpers.hpp>
//
//#include "boost/wave/cpp_iteration_context.hpp"
//#include <boost/wave/cpplexer/cpp_lex_token.hpp>  // token type
//#include "idllexer/idl_lex_iterator.hpp"          // lexer type
static bool isImportDirective  ;

			///////////////////////////////////////////////////////////////////////////////
			//  
			//  The custom_directives_hooks policy class is used to register some
			//  of the more advanced (and probably more rarely used hooks with the Wave
			//  library.
			//
			//  This policy type is used as a template parameter to the boost::wave::context<>
			//  object.
			//
			///////////////////////////////////////////////////////////////////////////////
			class custom_directives_hooks
				: public boost::wave::context_policies::default_preprocessing_hooks
			{
			//ContextT	ctx 
			public:
				
				 
					///////////////////////////////////////////////////////////////////////////
					//  
					//  The function 'locate_include_file' is called, whenever a #include
					//  directive was encountered. It is supposed to locate the given file and 
					//  should return the full file name of the located file. This file name
					//  is expected to uniquely identify the referenced file.
					//
					//  The parameter 'ctx' is a reference to the context object used for 
					//  instantiating the preprocessing iterators by the user.
					//
					//  The parameter 'file_path' contains the (expanded) file name found after 
					//  the #include directive. This parameter holds the string as it is 
					//  specified in the #include directive, i.e. <file> or "file" will result
					//  in a parameter value 'file'.
					//
					//  The parameter 'is_system' is set to 'true' if this call happens as a
					//  result of a #include '<file>' directive, it is 'false' otherwise, i.e. 
					//  for #include "file" directives.
					//
					//  The parameter 'current_name' is only used if a #include_next directive
					//  was encountered (and BOOST_WAVE_SUPPORT_INCLUDE_NEXT was defined to be 
					//  non-zero). In this case it points to unique full name of the current 
					//  include file (if any). Otherwise this parameter is set to NULL.
					//
					//  The parameter 'dir_path' on return is expected to hold the directory 
					//  part of the located file.
					//
					//  The parameter 'native_name' on return is expected to hold the unique 
					//  full file name of the located file.
					//
					//  The return value defines whether the file was located successfully.
					//
					///////////////////////////////////////////////////////////////////////////
					template <typename ContextT>
					bool 
					locate_include_file(ContextT& ctx, std::string &file_path, 
						bool is_system, char const *current_name, std::string &dir_path, 
						std::string &native_name) 
					{
						boost::filesystem::path  pa(file_path);
						bool isExtension = pa.has_extension(); //ok fonctionne  file_path.find(".") != std::string::npos; /// problem pour les path relative ../ TODO FIXME
						if (isExtension)
						{
										 if (!ctx.find_include_file(file_path, dir_path, is_system, current_name))
										 {
												if(file_path.substr(file_path.find_last_of(".") + 1) == "h") 
												{
													file_path = file_path.substr(0, file_path.find_last_of(".")) + ".oxh";
												}  
												else
												{
													if(file_path.substr(file_path.find_last_of(".") + 1) == "oxh") 
													{
													file_path = file_path.substr(0, file_path.find_last_of(".")) + ".h";
													}  
													else
														return false;   // could not locate file
												}
											if (!ctx.find_include_file(file_path, dir_path, is_system, current_name))
													return false;   // could not locate file
										 }
						}
						else
						{
							bool found = false;
							std::list<std::string> listofExtension = { ".h",".oxh" };
							for (auto it = listofExtension.begin(); it != listofExtension.end(); it++)
							{
								// Access the object through iterator
								std::string ext = *it;
								std::string temp = file_path + ext;
								if (ctx.find_include_file(temp, dir_path, is_system, current_name))
								{
									found = true;
									file_path = temp;
									break;
								}
							}
							if(!found)
									return false;						 
						}
				      
						namespace fs = boost::filesystem;

						fs::path native_path(boost::wave::util::create_path(file_path));
						if (!fs::exists(native_path)) {
							BOOST_WAVE_THROW_CTX(ctx, boost::wave::preprocess_exception, bad_include_file, 
								file_path.c_str(), ctx.get_main_pos());
							return false;
						}
						 
						// return the unique full file system path of the located file
						native_name = boost::wave::util::native_file_string(native_path);
						return true;      // include file has been located successfully
					}


  
					   //  recent essaie de changer les emit lines directive en fonction de import ou non
					   
						//  The function 'emit_line_directive' is called whenever a #line directive
						//  has to be emitted into the generated output.
						//
						//  The parameter 'ctx' is a reference to the context object used for 
						//  instantiating the preprocessing iterators by the user.
						//
						//  The parameter 'pending' may be used to push tokens back into the input 
						//  stream, which are to be used instead of the default output generated
						//  for the #line directive.
						//
						//  The parameter 'act_token' contains the actual #pragma token, which may 
						//  be used for error output. The line number stored in this token can be
						//  used as the line number emitted as part of the #line directive.
						//
						//  If the return value is 'false', a default #line directive is emitted
						//  by the library. A return value of 'true' will inhibit any further 
						//  actions, the tokens contained in 'pending' will be copied verbatim 
						//  to the output.
						//
						///////////////////////////////////////////////////////////////////////////
				/*	#if MY_USE_TEMPLATES 
				    template <typename ContextT, typename ContainerT>
					#else */


					/*  
	 			 */
			//#ifdef MY_USE_TEMPLATESm
			//		typedef boost::wave::idllexer::lex_iterator<boost::wave::cpplexer::lex_token<>> lex_iterator_type;
			//		typedef boost::wave::context<std::string::iterator, lex_iterator_type, boost::wave::iteration_context_policies::load_file_to_string, custom_directives_hooks>  ContextT;
			//		// typedef boost::wave::idllexer::lex_iterator<boost::wave::cpplexer::lex_token<>> ContainerT;
			//		//typedef	 boost::wave::context<std::_String_iterator<std::_String_val<std::_Simple_types<char> > >, boost::wave::idllexer::lex_iterator<boost::wave::cpplexer::lex_token<boost::wave::util::file_position<boost::wave::util::flex_string<char, std::char_traits<char>, std::allocator<char>, boost::wave::util::CowString<boost::wave::util::AllocatorStringStorage<char, std::allocator<char> >, char *> > > > >, boost::wave::iteration_context_policies::load_file_to_string, custom_directives_hooks, boost::wave::this_type> ContextT;
			//		template < typename ContainerT> 
			//	 #else
					 template <typename ContextT, typename ContainerT>
				 //#endif 
						/*template <typename ContextT, typename ContainerT>*/
			
						bool 
						emit_line_directive(ContextT & ctx, ContainerT &pending, 
							typename ContextT::token_type const& act_token)
						{
							using namespace boost::wave;
							unsigned int column = 6;
							typedef typename ContextT::token_type result_type;
						    typename ContextT::position_type pos = act_token.get_position();
						 
							// REAL QUESTION HOW TO ACESS THE ctx.pop_iteration_context() in custome_directives ?
						 //   typedef idllexer::lex_iterator<cpplexer::lex_token<>> lex_iterator_type;
							//// typedef boost::wave::context<std::string::iterator, lex_iterator_type,boost::wave::iteration_context_policies::load_file_to_string , custom_directives_hooks>  context; 
							//  boost::shared_ptr <base_iteration_context<ContextT, lex_iterator_type> >   iter_ctx  = ctx.pop_iteration_context();;
					  //    typedef BOOST_WAVE_STRINGTYPE   string_type;
						 //   lex_iterator_type it = iter_ctx->first;						  
							//string_type m=   it->get_value();
							//std::string tex = m.c_str(); //"\n"
							// the hook did not generate anything, emit default #line
							pos.set_column(1);

							 if(isImportDirective)
								 pending.push_back(result_type(boost::wave::T_PP_LINE, "#impo", pos));
							else
								pending.push_back(result_type(T_PP_LINE, "#line", pos));
							 //isImportDirective = false;

							pos.set_column(column);      // account for '#line'
							pending.push_back(result_type(T_SPACE, " ", pos));

							// 21 is the max required size for a 64 bit integer represented as a
							// string
							char buffer[22];

								using namespace std;    // for some systems sprintf is in namespace std
								sprintf (buffer, "%ld", pos.get_line());

								pos.set_column(++column);                 // account for ' '
								pending.push_back(result_type(T_INTLIT, buffer, pos));
								pos.set_column(column += (unsigned int)strlen(buffer)); // account for <number>
								pending.push_back(result_type(T_SPACE, " ", pos));
								pos.set_column(++column);                 // account for ' '

							std::string file("\"");
							boost::filesystem::path filename(
								 //boost::wave::util::create_path(act_pos.get_file().c_str()));
						       util::create_path(ctx.get_current_filename().c_str()));

							    using  util::impl::escape_lit;
								file += escape_lit(util::native_file_string(filename)) + "\"";

								pending.push_back(result_type(T_STRINGLIT, file.c_str(), pos));
								pos.set_column(column += (unsigned int)file.size());    // account for filename
								pending.push_back(result_type(T_GENERATEDNEWLINE, "\n", pos));
							
							return true;
						}


						    ///////////////////////////////////////////////////////////////////////////
    //  
    //  The function 'returning_from_include_file' is called, whenever an
    //  included file is about to be closed after it's processing is complete.
    //
    //  The parameter 'ctx' is a reference to the context object used for 
    //  instantiating the preprocessing iterators by the user.
    //
    ///////////////////////////////////////////////////////////////////////////
 
    // new signature
    template <typename ContextT>
    void
    returning_from_include_file(ContextT const& ctx)
    {
		isImportDirective = false;
    }
 

						custom_directives_hooks() : need_comment(true) { isImportDirective = false; }
    
						  ///////////////////////////////////////////////////////////////////////////
    //  
    //  The function 'found_include_directive' is called, whenever a #include
    //  directive was located.
    //
    //  The parameter 'ctx' is a reference to the context object used for 
    //  instantiating the preprocessing iterators by the user.
    //
    //  The parameter 'filename' contains the (expanded) file name found after 
    //  the #include directive. This has the format '<file>', '"file"' or 
    //  'file'.
    //  The formats '<file>' or '"file"' are used for #include directives found 
    //  in the preprocessed token stream, the format 'file' is used for files
    //  specified through the --force_include command line argument.
    //
    //  The parameter 'include_next' is set to true if the found directive was
    //  a #include_next directive and the BOOST_WAVE_SUPPORT_INCLUDE_NEXT
    //  preprocessing constant was defined to something != 0.
    //
    //  The return value defines whether the found file will be included 
    //  (return false) or will be skipped (return true).
    //
    ///////////////////////////////////////////////////////////////////////////
//
//#ifdef MY_USE_TEMPLATESm
//		typedef boost::wave::idllexer::lex_iterator<boost::wave::cpplexer::lex_token<>> lex_iterator_type;
//		typedef boost::wave::context<std::string::iterator, lex_iterator_type, boost::wave::iteration_context_policies::load_file_to_string, custom_directives_hooks>  ContextT;
//				 
// #else
	    template <typename ContextT>
//#endif 
    
    bool 
    found_include_directive(ContextT & ctx, std::string const& filename, 
        bool include_next) 
    {	
		
		 /*  using namespace boost::wave;
		   typedef idllexer::lex_iterator<cpplexer::lex_token<>> lex_iterator_type;
		   typedef BOOST_WAVE_STRINGTYPE   string_type;
		   auto  m=   ctx.last;
		   auto  iter_ctx  = ctx.iter_ctxs;;
		   ctx.pop_iteration_context();*/
		 
		   //l'id�e est ici de recuperer si c'est un import ou 1 include  !

        return false;    // ok to include this file
    }


    ///////////////////////////////////////////////////////////////////////////
    //
    //  The function 'found_directive' is called, whenever a preprocessor 
    //  directive was encountered, but before the corresponding action is 
    //  executed.
    //
    //  The parameter 'ctx' is a reference to the context object used for 
    //  instantiating the preprocessing iterators by the user.
    //
    //  The parameter 'directive' is a reference to the token holding the 
    //  preprocessing directive.
    //
    ///////////////////////////////////////////////////////////////////////////
//#if BOOST_WAVE_USE_DEPRECIATED_PREPROCESSING_HOOKS != 0
//    template <typename TokenT>
//    void
//    found_directive(TokenT const& directive)
//#else
    template <typename ContextT, typename TokenT>
    bool
    found_directive(ContextT const& ctx, TokenT const& directive)
//#endif
    {

		const boost::wave::token_id OX_IMPORT = boost::wave::T_PP_HHEADER;

        // print the commented conditional directives
        using namespace boost::wave;
        token_id id = token_id(directive);
        switch (id) {
        case T_PP_IFDEF:
        case T_PP_IFNDEF:
        case T_PP_IF:
        case T_PP_ELIF:
            std::cout << "//" + directive.get_value() << " ";
            need_comment = false;
			isinbloc = true;
            break;
            
        case T_PP_ELSE:
			   need_comment = true;
            break;
        case T_PP_ENDIF:
        //    std::cout << "b// " << directive.get_value() << std::endl;
            need_comment = true;
			isinbloc = false;
			
            break;
		
		case T_PP_IMPORT:
			isImportDirective = true;
		/*	std::cout << "FOUND ----- >T_PP_QHEADER" << endl;
			std::cout << "----- > IMPORT YES" << endl;*/
		break;
			   
		case T_PP_QHEADER:
		case T_PP_HHEADER :
			/*std::cout << "FOUND ----- >T_PP_QHEADER/T_PP_HHEADER" << endl;*/
			isImportDirective = false;
			//std::cout << "------> IMPORT NO" << endl;
			 break;

        default:
					//isImportDirective = false;
            break;
        }

 
        return false;
 
    }

    ///////////////////////////////////////////////////////////////////////////
    //
    //  The function 'evaluated_conditional_expression' is called, whenever a 
    //  conditional preprocessing expression was evaluated (the expression
    //  given to a #if, #elif, #ifdef or #ifndef directive)
    //
    //  The parameter 'ctx' is a reference to the context object used for 
    //  instantiating the preprocessing iterators by the user.
    //
    //  The parameter 'expression' holds the non-expanded token sequence
    //  comprising the evaluated expression.
    //
    //  The parameter expression_value contains the result of the evaluation of
    //  the expression in the current preprocessing context.
    //
    //  The return value defines, whether the given expression has to be 
    //  evaluated again, allowing to decide which of the conditional branches
    //  should be expanded. You need to return 'true' from this hook function 
    //  to force the expression to be re-evaluated.
    //
    ///////////////////////////////////////////////////////////////////////////
#if BOOST_WAVE_USE_DEPRECIATED_PREPROCESSING_HOOKS != 0
    template <typename ContainerT>
    bool
    evaluated_conditional_expression(
        ContainerT const& expression, bool expression_value)
#else
    template <typename ContextT, typename TokenT, typename ContainerT>
    bool
    evaluated_conditional_expression(ContextT const &ctx, 
        TokenT const& directive, ContainerT const& expression, 
        bool expression_value)
#endif
    {
        // print the conditional expressions
	//	std::cout << boost::wave::util::impl::as_string(expression);// << std::endl;
        need_comment = false;
        return false;          // ok to continue, do not re-evaluate expression
    }
    
    ///////////////////////////////////////////////////////////////////////////
    //
    //  The function 'skipped_token' is called, whenever a token is about to be
    //  skipped due to a false preprocessor condition (code fragments to be
    //  skipped inside the not evaluated conditional #if/#else/#endif branches).
    //
    //  The parameter 'ctx' is a reference to the context object used for 
    //  instantiating the preprocessing iterators by the user.
    //
    //  The parameter 'token' refers to the token to be skipped.
    //
    ///////////////////////////////////////////////////////////////////////////
#if BOOST_WAVE_USE_DEPRECIATED_PREPROCESSING_HOOKS != 0
    template <typename TokenT>
    void
    skipped_token(TokenT const& token)
#else
    template <typename ContextT, typename TokenT>
    void
    skipped_token(ContextT const& ctx, TokenT const& token)
#endif
    {
        // prepend a comment at the beginning of all skipped lines
        using namespace boost::wave;
        if (isinbloc && need_comment && token_id(token) != T_SPACE) {
            std::cout << "//";
            need_comment = false;
        }

		token_id id = token_id(token);
		 if (id == T_PP_IFDEF |
			 id == T_PP_IFNDEF |
			 id == T_PP_IF|
			 id == T_PP_ELIF|
			 id == T_PP_ELSE|
			 id == T_PP_ENDIF 

			 )
		 {
			 std::cout << token.get_value();
		 
		 }
		/* else
		    std::cout << "e-" << token.get_value();*/

		  //if(isinbloc)
				 if (token_id(token) == T_NEWLINE || token_id(token) == T_CPPCOMMENT)
				 {
					 need_comment = true;

					 if (token_id(token) == T_NEWLINE)
					 std::cout << std::endl;
				 }

    }

private:
    bool need_comment;
	bool isinbloc = false;
			};

#endif // !defined(BOOST_WAVE_ADVANCED_PREPROCESSING_HOOKS_INCLUDED)
