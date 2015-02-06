#ifndef H_UTIL_H
#define H_UTIL_H
/*
 *  h_util.hpp
 *  hector
 *
 *  Created by Ben on 2/24/11.
 *  Copyright 2010 DOE Pacific Northwest Lab. All rights reserved.
 *
 *  Provides utility services
 */


#define H_STRINGIFY_VAR(var) \
    #var

#define MODEL_NAME "hector"

/*!
 * \brief The model version number to be included in logs and outputs.
 * \note This must be updated manually when the model version changes.
 */
#define MODEL_VERSION "1.0"

#define OUTPUT_DIRECTORY "output/"

#define COMMENT_CHAR '#'

#endif // H_UTIL_H
