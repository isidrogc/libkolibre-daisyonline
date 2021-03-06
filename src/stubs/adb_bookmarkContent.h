/*
 * Copyright (C) 2012 Kolibre
 *
 * This file is part of kolibre-daisyonline.
 *
 * Kolibre-daisyonline is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * Kolibre-daisyonline is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with kolibre-daisyonline. If not, see <http://www.gnu.org/licenses/>.
 */



        #ifndef ADB_BOOKMARKCONTENT_H
        #define ADB_BOOKMARKCONTENT_H

       /**
        * adb_bookmarkContent.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Oct 19, 2012 (02:20:52 EEST)
        */

       /**
        *  adb_bookmarkContent class
        */

        
          #include "adb_bookmarkContentChoice_type0.h"
          

        #include <stdio.h>
        #include <axiom.h>
        #include <axis2_util.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>

        #include "axis2_extension_mapper.h"

        #ifdef __cplusplus
        extern "C"
        {
        #endif

        #define ADB_DEFAULT_DIGIT_LIMIT 1024
        #define ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT 64
        

        typedef struct adb_bookmarkContent adb_bookmarkContent_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_bookmarkContent_t
         * @param env pointer to environment struct
         * @return newly created adb_bookmarkContent_t object
         */
        adb_bookmarkContent_t* AXIS2_CALL
        adb_bookmarkContent_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _bookmarkContent adb_bookmarkContent_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkContent_free (
            adb_bookmarkContent_t* _bookmarkContent,
            const axutil_env_t *env);

        /**
         * Free adb_bookmarkContent_t object
         * @param  _bookmarkContent adb_bookmarkContent_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkContent_free_obj (
            adb_bookmarkContent_t* _bookmarkContent,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for ncxRef. 
         * @param  _bookmarkContent adb_bookmarkContent_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_bookmarkContent_get_ncxRef(
            adb_bookmarkContent_t* _bookmarkContent,
            const axutil_env_t *env);

        /**
         * Setter for ncxRef.
         * @param  _bookmarkContent adb_bookmarkContent_t object
         * @param env pointer to environment struct
         * @param arg_ncxRef axutil_uri_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkContent_set_ncxRef(
            adb_bookmarkContent_t* _bookmarkContent,
            const axutil_env_t *env,
            axutil_uri_t*  arg_ncxRef);

        /**
         * Resetter for ncxRef
         * @param  _bookmarkContent adb_bookmarkContent_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkContent_reset_ncxRef(
            adb_bookmarkContent_t* _bookmarkContent,
            const axutil_env_t *env);

        
        

        /**
         * Getter for URI. 
         * @param  _bookmarkContent adb_bookmarkContent_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_bookmarkContent_get_URI(
            adb_bookmarkContent_t* _bookmarkContent,
            const axutil_env_t *env);

        /**
         * Setter for URI.
         * @param  _bookmarkContent adb_bookmarkContent_t object
         * @param env pointer to environment struct
         * @param arg_URI axutil_uri_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkContent_set_URI(
            adb_bookmarkContent_t* _bookmarkContent,
            const axutil_env_t *env,
            axutil_uri_t*  arg_URI);

        /**
         * Resetter for URI
         * @param  _bookmarkContent adb_bookmarkContent_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkContent_reset_URI(
            adb_bookmarkContent_t* _bookmarkContent,
            const axutil_env_t *env);

        
        

        /**
         * Getter for bookmarkContentChoice_type0. 
         * @param  _bookmarkContent adb_bookmarkContent_t object
         * @param env pointer to environment struct
         * @return adb_bookmarkContentChoice_type0_t*
         */
        adb_bookmarkContentChoice_type0_t* AXIS2_CALL
        adb_bookmarkContent_get_bookmarkContentChoice_type0(
            adb_bookmarkContent_t* _bookmarkContent,
            const axutil_env_t *env);

        /**
         * Setter for bookmarkContentChoice_type0.
         * @param  _bookmarkContent adb_bookmarkContent_t object
         * @param env pointer to environment struct
         * @param arg_bookmarkContentChoice_type0 adb_bookmarkContentChoice_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkContent_set_bookmarkContentChoice_type0(
            adb_bookmarkContent_t* _bookmarkContent,
            const axutil_env_t *env,
            adb_bookmarkContentChoice_type0_t*  arg_bookmarkContentChoice_type0);

        /**
         * Resetter for bookmarkContentChoice_type0
         * @param  _bookmarkContent adb_bookmarkContent_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkContent_reset_bookmarkContentChoice_type0(
            adb_bookmarkContent_t* _bookmarkContent,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether ncxRef is nill
         * @param  _bookmarkContent adb_bookmarkContent_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_bookmarkContent_is_ncxRef_nil(
                adb_bookmarkContent_t* _bookmarkContent,
                const axutil_env_t *env);


        

        /**
         * Check whether URI is nill
         * @param  _bookmarkContent adb_bookmarkContent_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_bookmarkContent_is_URI_nil(
                adb_bookmarkContent_t* _bookmarkContent,
                const axutil_env_t *env);


        

        /**
         * Check whether bookmarkContentChoice_type0 is nill
         * @param  _bookmarkContent adb_bookmarkContent_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_bookmarkContent_is_bookmarkContentChoice_type0_nil(
                adb_bookmarkContent_t* _bookmarkContent,
                const axutil_env_t *env);


        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _bookmarkContent adb_bookmarkContent_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkContent_deserialize(
            adb_bookmarkContent_t* _bookmarkContent,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _bookmarkContent adb_bookmarkContent_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkContent_deserialize_obj(
            adb_bookmarkContent_t* _bookmarkContent,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _bookmarkContent adb_bookmarkContent_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_bookmarkContent_declare_parent_namespaces(
                    adb_bookmarkContent_t* _bookmarkContent,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _bookmarkContent adb_bookmarkContent_t object
         * @param env pointer to environment struct
         * @param bookmarkContent_om_node node to serialize from
         * @param bookmarkContent_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_bookmarkContent_serialize(
            adb_bookmarkContent_t* _bookmarkContent,
            const axutil_env_t *env,
            axiom_node_t* bookmarkContent_om_node, axiom_element_t *bookmarkContent_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _bookmarkContent adb_bookmarkContent_t object
         * @param env pointer to environment struct
         * @param bookmarkContent_om_node node to serialize from
         * @param bookmarkContent_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_bookmarkContent_serialize_obj(
            adb_bookmarkContent_t* _bookmarkContent,
            const axutil_env_t *env,
            axiom_node_t* bookmarkContent_om_node, axiom_element_t *bookmarkContent_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_bookmarkContent is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_bookmarkContent_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_bookmarkContent_t
         * @param env pointer to environment struct
         * @param _ncxRef axutil_uri_t*
         * @param _URI axutil_uri_t*
         * @param _bookmarkContentChoice_type0 adb_bookmarkContentChoice_type0_t*
         * @return newly created adb_bookmarkContent_t object
         */
        adb_bookmarkContent_t* AXIS2_CALL
        adb_bookmarkContent_create_with_values(
            const axutil_env_t *env,
                axutil_uri_t* _ncxRef,
                axutil_uri_t* _URI,
                adb_bookmarkContentChoice_type0_t* _bookmarkContentChoice_type0);

        


                /**
                 * Free adb_bookmarkContent_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _bookmarkContent adb_bookmarkContent_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axutil_uri_t* AXIS2_CALL
                adb_bookmarkContent_free_popping_value(
                        adb_bookmarkContent_t* _bookmarkContent,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for ncxRef by property number (1)
         * @param  _bookmarkContent adb_bookmarkContent_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_bookmarkContent_get_property1(
            adb_bookmarkContent_t* _bookmarkContent,
            const axutil_env_t *env);

    
        

        /**
         * Getter for URI by property number (2)
         * @param  _bookmarkContent adb_bookmarkContent_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_bookmarkContent_get_property2(
            adb_bookmarkContent_t* _bookmarkContent,
            const axutil_env_t *env);

    
        

        /**
         * Getter for bookmarkContentChoice_type0 by property number (3)
         * @param  _bookmarkContent adb_bookmarkContent_t object
         * @param env pointer to environment struct
         * @return adb_bookmarkContentChoice_type0_t*
         */
        adb_bookmarkContentChoice_type0_t* AXIS2_CALL
        adb_bookmarkContent_get_property3(
            adb_bookmarkContent_t* _bookmarkContent,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_BOOKMARKCONTENT_H */
    

