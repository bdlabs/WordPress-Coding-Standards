<?php
/* TAB BASED FILE */

/**
 * This is a correctly formatted docblock.
 *
 * @param int $number Number of things.
 */
do_action( 'something', $number );

		/**
		 * This is a correctly formatted docblock.
		 *
		 * @param int $number Number of things.
		 */
		apply_filters( 'something', $number );

	// Empty docblock + wrong style closer.
	/**
	 *
	 **/

/** OK - one line docblock. */
require 'somefile.php';

/** Incorrect - allow short in
    combination with multi-line non-starred docblock. */
require 'somefile.php';

// @codingStandardsChangeSetting WordPress.Commenting.DocblockFormat allow_short false

/** Incorrect - one line docblock. */
require 'somefile.php';

// @codingStandardsChangeSetting WordPress.Commenting.DocblockFormat allow_short true

		/** The open tag should be on its own line.
		 *
		 * The close tag is not on its own line. */
		apply_filters( 'something', $number );

$var = 'a'; /** The open tag should be on its own line.
		 *
		 * The close tag is not on its own line.
		 */ // More comments.

/* Another comment. */ /** The open tag should be on its own line.
		 *
		 * The close tag is not on its own line.
		 */ apply_filters( 'something', $number );
/**
 *
 *
 * Incorrectly formatted:
 * - No blank line before + blank lines after (note: checks temporarily removed from sniff).
 * - Blank lines at start of docblock.
 * - Blank lines at end of docblock.
 *
 * @param int $number Number of things.
 *
 *
 */


do_action( 'something', $number );

/**
 *Incorrectly formatted: There are no spaces after the stars.
 *
 *@param int $number Number of things.
 */
do_action( 'something', $number );

/**
 *      Incorrectly formatted: There are too many spaces after the stars.
 *
 *         @since 0.16.0
 *
 *   @param int $number Number of things.
 *                      Second line of param comment - the spaces after the star
 *                      should be fixed by a param comment sniff and are not the
 *                      concern of this sniff.
 */
do_action( 'something', $number );

/**
         Incorrectly formatted: The stars are missing and the indentation is off.

@since 0.16.0

     @param int $number Number of things.
 */
do_action( 'something', $number );

		/**
		         Incorrectly formatted: The stars are missing and the indentation is off.

		@since 0.16.0

		     @param int $number Number of things.
		 */
		do_action( 'something', $number );

/**
* This is an INcorrectly aligned docblock: no space before (most) stars.
*
 * @since 0.16.0
*/
class ABC {

		/**
		* This is an INcorrectly aligned docblock: no space before (most) stars.
		*
		 * @var int.
		*/
		public $property;
}

/**
  * This is an INcorrectly aligned docblock: too much space before stars.
 *
  * @since 0.16.0
  */
require ABSPATH . 'filename.php';

		/**
		  * This is an INcorrectly aligned docblock: too much space before stars.
		 *
		  * @param int $number Number of things.
		  */
		function some_function( $number ) {}

		/**
 * This is a INcorrectly aligned docblock: stars not aligned.
 *
 * @param int $number Number of things.
 */
do_action( 'something', $number );

		/**
			 * This is a INcorrectly aligned docblock: stars not aligned.
			 *
			 * @param int $number Number of things.
			 */
			do_action( 'something', $number );

		/**
	* This is a INcorrectly aligned docblock: stars not aligned.
	*
	* @param int $number Number of things.
	*/
	do_action( 'something', $number );

		/**
			* This is a INcorrectly aligned docblock: stars not aligned.
	*
		* @param int $number Number of things.
			*/
			do_action( 'something', $number );

		/**
	  * This is a INcorrectly aligned docblock: stars not aligned.
	  *
	  * @param int $number Number of things.
	  */
	do_action( 'something', $number );

		/**
			   * This is a INcorrectly aligned docblock: stars not aligned.
			   *
			   * @param int $number Number of things.
			   */
			   do_action( 'something', $number );

/**
doc comment
*/
public $property;

// Empty one-liner.
/** */
public $property;

/**    doc comment    */
public $property;

// @codingStandardsChangeSetting WordPress.Commenting.DocblockFormat allow_short false

// Empty one-liner.
/** */
public $property;

/**    doc comment    */
public $property;

// @codingStandardsChangeSetting WordPress.Commenting.DocblockFormat allow_short true

	// Empty without stars.
	/**


	*/
   do_action( 'something', $number );

	/**
	 * Incorrect: too much space before the first tag.
	 *
	 *
	 *
	 * @param int $number Number.
	 */
	do_action( 'something', $number );

/**
 * Incorrect: no space before the first tag.
 * @param int $number Number.
 */
do_action( 'something', $number );

	/**
	 * @param int $number When there is no short description, ignore that there is no
	 *                    blank line before the first tag.
	 *                    The missing short description is for another sniff.
	 */
	do_action( 'something', $number );

		/**
		 * Incorrect: multiple subsequent empty lines.
		 *
		 *
		 * This is a long description.
		 *
		 * @since 0.16.0
		 *
		 *
		 * @param int $number Number.
		 */
		do_action( 'something', $number );

	// Test against fixer conflicts when docblock follows a scope opener.
	switch ( $doaction ) {
		case 'detach':
			break;

		default:
			/** This action is documented in wp-admin/edit-comments.php */
			$location = apply_filters( 'handle_bulk_actions-' . get_current_screen()->id, $location, $doaction, $post_ids );
	}

	/**
	 * Make sure array format @param comments are not being "fixed" for one space after *.
	 *
	 * @param array  $dropdown_args {
	 *     An array of taxonomy parent drop-down arguments.
	 *
	 *     @type int|bool $hide_empty       Whether to hide terms not attached to any posts. Default 0|false.
	 *     @type bool     $hide_if_empty    Whether to hide the drop-down if no terms exist. Default false.
	 * }
	 * @param string $taxonomy The taxonomy slug.
	 * @param string $context  Filter context. Accepts 'new' or 'edit'.
	 */
	$dropdown_args = apply_filters( 'taxonomy_parent_dropdown_args', $dropdown_args, $taxonomy, 'new' );

// Allow for replacement markers.
/**#@+
 * Authentication Unique Keys and Salts.
 */
define('AUTH_KEY',         'put your unique phrase here');