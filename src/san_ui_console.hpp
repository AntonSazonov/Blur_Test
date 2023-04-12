#pragma once

#include <string>
#include <functional>
#include <map>
#include <blend2d.h>

namespace san::ui {

namespace internal {
const uint32_t font_6x8[] = {
	0x00000000,0x7c000000,0x7ca28aa2,0xf6d67c00,0x38007cd6,0x387c3e7c,0x7e3c1800,0x0c00183c,0x0c6cfe6c,0x7e3a1800,0x0000183a,0x00001818,
	0xe7e7ffff,0x3c00ffff,0x003c2424,0xdbdbc3ff,0x0c00ffc3,0x706c5212,0x9e946000,0x06006094,0x2040fc0e,0x507e0600,0x5400fcac,0x54386c38,
	0x7cfe0000,0x10001038,0x00fe7c38,0xfe6c2800,0x0000286c,0x00fa00fa,0xfe906000,0x4400fe80,0x449aaab2,0x3c3c3c00,0x2800003c,0x286dff6d,
	0xfe602000,0x08002060,0x080cfe0c,0x7c101000,0x10001038,0x10107c38,0x02021e00,0x10000202,0x107c107c,0xfc3c0c00,0xc0000c3c,0xc0f0fcf0,
	0x00000000,0x00000000,0x0060fa60,0x00c0e000,0x2400c0e0,0x247e247e,0x56d42400,0xc6000048,0xc62610c8,0x6a926c00,0x00000a04,0x0000c0e0,
	0x827c0000,0x00000000,0x00007c82,0x387c1000,0x1000107c,0x10107c10,0x06070000,0x10000000,0x10101010,0x06060000,0x04000000,0x40201008,
	0x928a7c00,0x00007ca2,0x0002fe42,0x928a4600,0x44006292,0x6c929292,0x48281800,0xf40008fe,0x8c929292,0x92523c00,0x80000c92,0xc0a0908e,
	0x92926c00,0x60006c92,0x78949292,0x36360000,0x00000000,0x00003637,0x44281000,0x24000082,0x24242424,0x44820000,0x40001028,0x60909a80,
	0xba827c00,0x7e0078aa,0x7e888888,0x9292fe00,0x7c006c92,0x44828282,0x8282fe00,0xfe007c82,0x82929292,0x9090fe00,0x7c008090,0x5e929282,
	0x1010fe00,0x0000fe10,0x0082fe82,0x02020c00,0xfe00fc02,0x82442810,0x0202fe00,0xfe000202,0xfe402040,0x2040fe00,0x7c00fe10,0x7c828282,
	0x9090fe00,0x7c006090,0x7a848a82,0x9090fe00,0x64006698,0x4c929292,0xfe808000,0xfc008080,0xfc020202,0x0204f800,0xfc00f804,0xfc023c02,
	0x1028c600,0xe000c628,0xe0100e10,0xa2928e00,0x000000c2,0x008282fe,0x10204000,0x00000408,0x00fe8282,0x80402000,0x01012040,0x01010101,
	0xe0c00000,0x04000000,0x1e2a2a2a,0x2222fe00,0x1c001c22,0x14222222,0x22221c00,0x1c00fe22,0x102a2a2a,0x907e1000,0x18000090,0x3e252525,
	0x2020fe00,0x0000001e,0x0002be00,0x21010200,0xfe0000be,0x00221408,0xfe000000,0x3e000002,0x1e201820,0x20203e00,0x1c00001e,0x1c222222,
	0x22223f00,0x1c001c22,0x3f222222,0x221e2200,0x10001020,0x042a2a2a,0x227c2000,0x3c000024,0x003e0402,0x02043800,0x3c003804,0x3c060c06,
	0x08083600,0x39000036,0x003c0605,0x2a2a2600,0x10000032,0x0082827c,0xee000000,0x00000000,0x107c8282,0x40804000,0x3c000080,0x3c64c464,
	0x01010101,0x01010101,0x01010101,0xc0e00000,0x01010000,0x01010101,0x00c0e000,0x0000c0e0,0x00003636,0xff101010,0x50501010,0x5050ff50,
	0x01010101,0xc6000101,0xc62610c8,0x01010101,0x10000101,0x00824428,0x01010101,0x01010101,0x01010101,0x01010101,0x01010101,0x01010101,
	0x01010101,0x00000101,0x0000c0e0,0xc0e00000,0xe0000000,0xc0e000c0,0x00c0e000,0x0000c0e0,0x00001818,0x10101000,0x10001010,0x10101010,
	0x01010101,0x80000101,0x8080fe80,0x01010101,0x00000101,0x10284482,0x01010101,0x01010101,0x01010101,0x01010101,0x01010101,0x01010101,
	0x00000000,0xe4000000,0xfc12d212,0x4645b900,0x010100bc,0x01010101,0x28287c54,0x0101547c,0x01010101,0xff000000,0x44000000,0x449aaab2,
	0x52d27e00,0x1c0042d2,0x14222222,0x92927c00,0x10004482,0x00824428,0x1f101010,0x10000000,0x10101010,0x9090fe00,0x80006698,0x80027e02,
	0x90906000,0x10000060,0x10107c10,0x01010101,0x01010101,0x01010101,0x01010101,0x30000101,0x3e080808,0xfe906000,0x0000fe80,0x00000010,
	0x2aaa1c00,0x60fe10aa,0xc8c8fe18,0x2a2a1c00,0x00001422,0x10284482,0x01010101,0x01010101,0x01010101,0x01010101,0x00000101,0x00823e80,
	0x88887e00,0xfe007e88,0x8c929292,0x9292fe00,0xfe006c92,0x80808080,0x82827e03,0xfe0003fe,0x82929292,0xfe10ee00,0x9244ee10,0x006c9292,
	0x0804fe00,0x7e00fe10,0x7e908884,0x2810fe00,0x02008244,0xfe80807e,0x2040fe00,0xfe00fe40,0xfe101010,0x82827c00,0xfe007c82,0xfe808080,
	0x9090fe00,0x7c006090,0x44828282,0xfe808000,0xe4008080,0xfc121212,0xfe887000,0xc6007088,0xc6281028,0x0202fe00,0xe00003fe,0xfe101010,
	0xfe02fe00,0xfe00fe02,0xff02fe02,0x12fe80c0,0xfe000c12,0xfe0c1212,0x1212fe00,0x44000c12,0x7c929282,0x7c10fe00,0x66007c82,0xfe909098,
	0x2a2a0400,0x3c001e2a,0x8c525252,0x2a2a3e00,0x3e00142a,0x00302020,0x22221e03,0x1c00033e,0x102a2a2a,0x3e083600,0x14003608,0x142a2a22,
	0x08043e00,0x3e003e10,0x3e504804,0x14083e00,0x1c020022,0x003e2020,0x08103e00,0x3e003e10,0x3e080808,0x22221c00,0x3e001c22,0x3e202020,
	0x22223f00,0x1c001c22,0x14222222,0x3e202000,0x39002020,0x003c0605,0x3e241800,0x36001824,0x00360808,0x02023e00,0x3000033e,0x3e080808,
	0x3e023e00,0x3e003e02,0x3f023e02,0x0a3e2030,0x3e00040a,0x3e040a0a,0x0a0a3e00,0x1400040a,0x1c2a2a22,0x1c083e00,0x12001c22,0x3e28282c };
} // namespace internal

class console final {
	const int		m_font_width	= 6;
	const int		m_font_height	= 8;
	//int				m_scale			= 2;

	//BLRgba32		m_color;
	BLPointI		m_cursor;
	const BLImage *	m_image			= nullptr;	// temporary image pointer


public:
	struct command {
		//std::string				name;
		std::string				help;
		std::function <void()>	func;
	};

private:
	std::map <std::string, command>	m_commands{
			{ "quit", { "Quit", []{ fprintf( stderr, "Quit program.\n" ); } } }
		};


	void draw_char( char ch ) {
		assert( m_image != nullptr );

		BLImageData data;
		m_image->getData( &data );
		uint8_t * p_dst = reinterpret_cast<uint8_t *>( data.pixelData ) + m_cursor.y * data.stride + m_cursor.x * 4;

		const uint8_t * p_src = &reinterpret_cast<const uint8_t *>( internal::font_6x8 )[ch * 6u];
		for ( int i = 0; i < m_font_width; i++ ) {
			uint8_t * p = p_dst + i * 4;// * m_scale;
			uint8_t v = p_src[i];
			for ( int j = 0; j < m_font_height; j++ ) {
				if ( v << j & 0x80 ) {
					p[0] = 255;
					p[1] = 255;
					p[2] = 255;
					p[3] = 255;
				}
				p += data.stride;// * m_scale;
			}
		}
	}

	void draw_string( const std::string & str ) {
		assert( m_image != nullptr );
		for ( const char & ch : str ) {
			draw_char( ch );
			m_cursor.x += (m_font_width + 1);// * m_scale;
		}
	}

public:
	console() = default;
	//console( int scale ) : m_scale( scale ) {}

	template <typename F>
	void add_command( const std::string & cmd, const std::string & help, F && func ) {
		m_commands.emplace( cmd, command{ help, std::forward<F>( func ) } );
	}

	void set_cursor( const BLPointI & pt ) {
		m_cursor = pt;
		//m_cursor.x *= m_scale;
		//m_cursor.y *= m_scale;
	}

	template <typename ContextType>
	void draw( ContextType * p_ui ) {
		m_image = &p_ui->image();

		draw_string( "Hello! Abc." );

		m_image = nullptr;
	}
}; // console

} // namespace san::ui
