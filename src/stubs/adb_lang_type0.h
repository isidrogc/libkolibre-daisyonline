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



        #ifndef ADB_LANG_TYPE0_H
        #define ADB_LANG_TYPE0_H

       /**
        * adb_lang_type0.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Oct 19, 2012 (02:20:52 EEST)
        */

       /**
        *  adb_lang_type0 class
        */

        

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
        

        typedef struct adb_lang_type0 adb_lang_type0_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_lang_type0_t
         * @param env pointer to environment struct
         * @return newly created adb_lang_type0_t object
         */
        adb_lang_type0_t* AXIS2_CALL
        adb_lang_type0_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _lang_type0 adb_lang_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_lang_type0_free (
            adb_lang_type0_t* _lang_type0,
            const axutil_env_t *env);

        /**
         * Free adb_lang_type0_t object
         * @param  _lang_type0 adb_lang_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_lang_type0_free_obj (
            adb_lang_type0_t* _lang_type0,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
            /**
             * Deserialize the content from a string to adb objects
             * @param  _lang_type0 adb_lang_type0_t object
             * @param env pointer to environment struct
             * @param node_value to deserialize
             * @param parent_element The parent element if it is an element, NULL otherwise
             * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
             */
            axis2_status_t AXIS2_CALL
            adb_lang_type0_deserialize_from_string(
                            adb_lang_type0_t* _lang_type0,
                                            const axutil_env_t *env,
                                            const axis2_char_t *node_value,
                                            axiom_node_t *parent);
        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _lang_type0 adb_lang_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_lang_type0_deserialize(
            adb_lang_type0_t* _lang_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _lang_type0 adb_lang_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_lang_type0_deserialize_obj(
            adb_lang_type0_t* _lang_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _lang_type0 adb_lang_type0_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_lang_type0_declare_parent_namespaces(
                    adb_lang_type0_t* _lang_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        
        /**
         * Serialize to a String from the adb objects
         * @param  _lang_type0 adb_lang_type0_t object
         * @param env pointer to environment struct
         * @param namespaces hash of namespace uri to prefix
         * @return serialized string
         */
            axis2_char_t* AXIS2_CALL
            adb_lang_type0_serialize_to_string(
                    adb_lang_type0_t* _lang_type0,
                    const axutil_env_t *env, axutil_hash_t *namespaces);
        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _lang_type0 adb_lang_type0_t object
         * @param env pointer to environment struct
         * @param lang_type0_om_node node to serialize from
         * @param lang_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_lang_type0_serialize(
            adb_lang_type0_t* _lang_type0,
            const axutil_env_t *env,
            axiom_node_t* lang_type0_om_node, axiom_element_t *lang_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _lang_type0 adb_lang_type0_t object
         * @param env pointer to environment struct
         * @param lang_type0_om_node node to serialize from
         * @param lang_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_lang_type0_serialize_obj(
            adb_lang_type0_t* _lang_type0,
            const axutil_env_t *env,
            axiom_node_t* lang_type0_om_node, axiom_element_t *lang_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_lang_type0 is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_lang_type0_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_lang_type0_t
         * @param env pointer to environment struct
         * @return newly created adb_lang_type0_t object
         */
        adb_lang_type0_t* AXIS2_CALL
        adb_lang_type0_create_with_values(
            const axutil_env_t *env);

        

                /**
                 * Free adb_lang_type0_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _lang_type0 adb_lang_type0_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                void* AXIS2_CALL
                adb_lang_type0_free_popping_value(
                        adb_lang_type0_t* _lang_type0,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        

        /**
         * Getter for language 
         * @param  _lang_type0 adb_lang_type0_t object
         * @param env pointer to environment struct
         * @return language, if it the last set value
         */
        axis2_char_t* AXIS2_CALL
        adb_lang_type0_get_language(
            adb_lang_type0_t* _lang_type0,
            const axutil_env_t *env);

        /**
         * Setter for language 
         * @param  _lang_type0 adb_lang_type0_t object
         * @param env pointer to environment struct
         * @param member_type language
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_lang_type0_set_language(
            adb_lang_type0_t* _lang_type0,
            const axutil_env_t *env, 
            axis2_char_t* member_type);

        /**
         * Check if the language  is valid, you can replace this with adb_lang_type0_current_member_type
         * @param  _lang_type0 adb_lang_type0_t object
         * @param env pointer to environment struct
         * @return language is valid or not
         */
        axis2_bool_t AXIS2_CALL
        adb_lang_type0_is_valid_language(
            adb_lang_type0_t* _lang_type0,
            const axutil_env_t *env);

    
        /**
         * Reset any value inside the union, this will take the union to NULL state
         * @param  _lang_type0 adb_lang_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_lang_type0_reset_members(
            adb_lang_type0_t* _lang_type0,
            const axutil_env_t *env);

        /**
         * Retrieve the currrent member type
         * @param  _lang_type0 adb_lang_type0_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*, the current member type as a string
         */
        axis2_char_t* AXIS2_CALL
        adb_lang_type0_current_member_type(
            adb_lang_type0_t* _lang_type0,
            const axutil_env_t *env);
    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_LANG_TYPE0_H */
    

