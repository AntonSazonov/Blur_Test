#pragma once

#include <list>

namespace san {

class image_list {
	std::list <std::shared_ptr <SDL_Surface>>	m_images; // Image list from ./pics
	decltype(m_images)::const_iterator			m_image_curr;

public:
	image_list( const std::string & path = "./pics/" ) {

		// Load all JPEGs from diretory...
		for ( auto & p : std::filesystem::recursive_directory_iterator( path ) ) {
			if ( p.path().extension() == ".jpg" ) { // JPEGs only
				std::printf( "Loading '%s'...", p.path().string().c_str() );
				std::shared_ptr <SDL_Surface> image = sdl::load( p.path().string().c_str() );
				if ( image ) {
					m_images.push_back( image );
					std::printf( " ok. Size: %dx%d\n", image->w, image->h );
				} else {
					std::printf( " failed.\n" );
				}
			}
		}

		// Select first image in list.
		if ( !m_images.empty() ) {
			m_image_curr = m_images.cbegin();
		}
	}

	explicit operator bool () const { return !m_images.empty(); }

	std::shared_ptr <SDL_Surface> current_image() const { return *m_image_curr; }

	void go_prev() {
		if ( m_image_curr == m_images.cbegin() ) {
			m_image_curr = --m_images.cend();
		} else {
			--m_image_curr;
		}
	}

	void go_next() {
		++m_image_curr;
		if ( m_image_curr == m_images.cend() ) {
			m_image_curr = m_images.cbegin();
		}
	}

}; // class image_list

} // namespace san
